// A data processing system classifies even and odd inputs separately.
// Implement a solution to
// store 5 elements in an array, compute sum of all even and sum of all odd numbers

#include<iostream>
using namespace std;

int main(){
  int arr[5];
  int sum_odd=0;
  int sum_even=0;

  for(int i=0 ; i<5 ; i++){
    cout<<"enter number : ";
    cin>>arr[i];
  }
  for( int i=0 ; i<5 ; i++){
    if(arr[i]%2==0){
        sum_even = sum_even+ arr[i];
    }
    else
    sum_odd= sum_odd+  arr[i];
  }
cout<<"odd sum is :"<<sum_odd;
cout<<"\neven sum is : "<<sum_even;
return 0;
}