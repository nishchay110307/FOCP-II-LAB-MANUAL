// Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N.
//     To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
//    • Events whose ID is divisible by 3 are tagged as “Buzz”
//    • Events whose ID is divisible by 5 are tagged as “Fuzz”
//    • Events divisible by both 3 and 5 receive both tags

#include<iostream>
using namespace std;
int main(){
    int N;//event id
    cout<<"enter the event id ";
    cin>>N;
    if(N==0){
        cout<<"invalid event id"<<endl;
    }
    else if(N%3==0){
        cout<<"Buzz"<<endl;
    }
    else if(N%5==0){
        cout<<"Fuzz"<<endl;
    }
    else if(N % 3 == 0 && N % 5 == 0
){cout<<"Buzz,Fuzz";}
    return 0;
}