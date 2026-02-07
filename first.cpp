// Q1. A teacher wants to calculate the average marks of three students to determine the class performance.
// Implement a solution to accept three numbers and compute their average.

#include <iostream>
using namespace std;
int main() {
    int mark1,mark2,mark3;
    cout<<"enter the marks of every student";
    
    cin>>mark1;
    cin>>mark2;
    cin>>mark3;
    
    float avg=(mark1+mark2+mark3)/3.0;
    cout<<"the avg marks of all students are "<<avg;

    return 0;
}