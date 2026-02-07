// A cybersecurity tool verifies prime numbers used in encryption keys.
//  Implement a solution to accept a
// number and check whether it is prime.


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int flag=1;
    for(int i=2 ; i<=n/2 ; i++){
         if( n%i==0){
         flag=0;
         break;}
    }
if(flag==0)
cout<<"not prime";
else
cout<<"prime";
return 0;

}