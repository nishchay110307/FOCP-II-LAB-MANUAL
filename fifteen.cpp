// A data analytics tool finds the maximum sales figure from multiple entries.
// Implement a solution to accept ‘n’ numbers and display the largest
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter how many numbers : ";
cin>>n;
int entry[n];
for( int i=0; i<n ; i++){
    cout<<"enter number "<<i+1<<":";
    cin>>entry[i];
}
int max=entry[0];
for(int j=1 ; j<n; j++){
if(max<entry[j])
max=entry[j];
}
cout<<"max is "<<max;
return 0;
}