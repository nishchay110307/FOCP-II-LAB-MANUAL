// Problem
// Bob has a playlist of 
//  songs, each song has a singer associated with it (denoted by an integer)
// Favourite singer of Bob is the one whose songs are the most on the playlist
// Count the number of Favourite Singers of Bob
// Input Format 
// The first line contains an integer 
// , denoting the number of songs in Bob's playlist.
// The following input contains 
//  integers, 
//  integer denoting the singer of the 
//  song.
// Output Format
// Output a single integer, the number of favourite singers of Bob

#include<iostream>
using namespace std;
int main(){
    int arr[1000]={0};
    int n;
    
    int singer;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter singer number";
        cin>>singer;
        arr[singer]++;
    }
    cout<<"\n frequency";
    for(int j=0;j<=70;j++){
        if(arr[j]!=0)
        cout<<"\n arr["<<j<<"] is : "<<arr[j];
    }
    return 0;
}