// Problem
// You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

// Input Format
// The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

// Output Format
// Print the required answer on a single line.

// Constraints 

// Note
// String S consists of lowercase English Alphabets only.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin>>n;
    
    string rev="";
    for(int i=n.length()-1;i>=0;i--){
        rev += n[i];
    }
    if(rev==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}