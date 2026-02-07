//  A supermarket software maintains item price lists. 
//  Implement a solution to store the prices of 10
// items in an array and display the maximum price.

#include<iostream>
using namespace std;

int main(){
int arr[10];
int max;
for( int i=0 ; i<10 ; i++){
      cout<<"enter price of item :";
      cin>>arr[i];
}
max=arr[0];
for( int i=1 ; i<10 ; i++){
     if( arr[i]> max){
        max=arr[i];
     }
}
cout<<" max is : "<<max;
return 0;
}