// Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
// and identify the winner.

#include<iostream>
using namespace std;
int main(){
    int p1,p2,p3;
    cout<<"enter the score of player 1 ";
    cin>>p1;
    cout<<"enter the score of player 2 ";
    cin>>p2;
    cout<<"enter the score of player 3 ";
    cin>>p3;

    if(p1>p2&&p3){
        cout<<"player 1 is the winner with the score "<<p1;
    }
    else if(p2>p1&&p3)
    { 
        cout<<"player 2 is the winner with the score "<<p2;
    }
    else{
        cout<<"player 3 is the winner with score"<<p3;
    }
    return 0;
} 