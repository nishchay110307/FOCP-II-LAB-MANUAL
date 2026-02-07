#include<iostream>
#include<string>
//#include<cctype>
using namespace std;
int main(){
cout<<"enter the word to convert the cases of it's alphabets";
string n;
cin>>n;
for(int i=0; i<n.length();i++){
    if(islower(n[i])){
        n[i]=toupper(n[i]);
    }
    else if(isupper(n[i])){
        n[i]=tolower(n[i]);
    }
};
cout<<""<<n;
return 0;
}