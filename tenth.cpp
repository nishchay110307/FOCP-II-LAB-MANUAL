#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year to check";
    cin>>year;
    if(year%400==0){
        cout<<"the year is leap year";
    }
    else if(year%100==0){
        cout<<"the year is not a leap year";
    }
    else if(year%4==0){
        cout<<"the year is leap year";
    }
    else{cout<<"invalud inpurt";};
    return 0;
}
