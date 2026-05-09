#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <cstdlib>

using namespace std;

const int SIZE = 5;

struct Player {
    string name;
    int score = 0;
};

class Level {
    vector<vector<int>> gridA, gridB;
    vector<pair<int,int>> differences;
    vector<pair<int,int>> found;

public:
    int totalDiff;

    Level(int diffCount) {
        totalDiff = diffCount;

        gridA.assign(SIZE, vector<int>(SIZE, 0));
        gridB.assign(SIZE, vector<int>(SIZE, 0));

        // fill random numbers
        for(int i=0;i<SIZE;i++)
            for(int j=0;j<SIZE;j++){
                gridA[i][j] = rand()%9;
                gridB[i][j] = gridA[i][j];
            }

        // create differences
        while(differences.size() < diffCount){
            int x = rand()%SIZE;
            int y = rand()%SIZE;

            bool exists=false;
            for(auto &p:differences)
                if(p.first==x && p.second==y) exists=true;

            if(!exists){
                gridB[x][y] = (gridA[x][y]+1)%9;
                differences.push_back({x,y});
            }
        }
    }

    void display() {
        cout<<"\nImage A\t\tImage B\n";
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++)
                cout<<gridA[i][j]<<" ";
            cout<<"\t";
            for(int j=0;j<SIZE;j++)
                cout<<gridB[i][j]<<" ";
            cout<<"\n";
        }
    }

    bool check(int x,int y){
        for(auto &p:differences){
            if(p.first==x && p.second==y){
                for(auto &f:found)
                    if(f==p) return false;

                found.push_back(p);
                return true;
            }
        }
        return false;
    }

    bool complete(){
        return found.size()==differences.size();
    }

    pair<int,int> giveHint(){
        for(auto &p:differences){
            bool ok=true;
            for(auto &f:found)
                if(f==p) ok=false;
            if(ok) return p;
        }
        return {-1,-1};
    }
};

class ScoreManager {
public:
    static void saveScore(string name,int score){
        ofstream file("leaderboard.txt",ios::app);
        file<<name<<" "<<score<<"\n";
    }

    static void showLeaderboard(){
        ifstream file("leaderboard.txt");
        vector<pair<int,string>> list;

        string name; int score;
        while(file>>name>>score)
            list.push_back({score,name});

        sort(list.rbegin(), list.rend());

        cout<<"\n===== Leaderboard =====\n";
        for(int i=0;i<list.size() && i<5;i++)
            cout<<i+1<<". "<<list[i].second<<" - "<<list[i].first<<"\n";
    }
};

class Game {
    Player player;
    int lives=3;
    int hints=3;
    int difficultyTime;

public:
    void start(){
        cout<<"Enter player name: ";
        cin>>player.name;

        chooseDifficulty();
        playLevels();
        endGame();
    }

    void chooseDifficulty(){
        int ch;
        cout<<"\nChoose difficulty\n1.Easy\n2.Medium\n3.Hard\nChoice: ";
        cin>>ch;

        if(ch==1) difficultyTime=120;
        else if(ch==2) difficultyTime=80;
        else difficultyTime=50;
    }

    void playLevels(){
        vector<int> diffs={3,5,8};

        for(int level=0;level<diffs.size();level++){
            Level L(diffs[level]);
            time_t startTime=time(0);

            cout<<"\n===== Level "<<level+1<<" =====\n";

            while(!L.complete() && lives>0){
                int remaining=difficultyTime-(time(0)-startTime);

                if(remaining<=0){
                    cout<<"Time up!\n";
                    lives=0;
                    break;
                }

                L.display();

                cout<<"Lives:"<<lives<<"  Hints:"<<hints<<"  Score:"<<player.score;
                cout<<"  Time:"<<remaining<<"\n";

                cout<<"Enter row col (-1 for hint): ";

                int r,c;
                cin>>r;

                if(r==-1 && hints>0){
                    hints--;
                    auto h=L.giveHint();
                    cout<<"Hint: "<<h.first<<" "<<h.second<<"\n";
                    continue;
                }

                cin>>c;

                if(L.check(r,c)){
                    cout<<"Correct!\n";
                    player.score+=10;
                } else {
                    cout<<"Wrong!\n";
                    player.score-=5;
                    lives--;
                }
            }

            if(lives<=0) break;

            player.score+=20; // level bonus
        }
    }

    void endGame(){
        cout<<"\nGame Over! Final Score: "<<player.score<<"\n";
        ScoreManager::saveScore(player.name,player.score);
        ScoreManager::showLeaderboard();
    }
};

int main(){
    srand(time(0));
    Game g;
    g.start();
}