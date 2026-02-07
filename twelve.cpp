// Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. 
//Implement a solution to
// check the triangle type based on its sides.
#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"enter all three sides of the triangle below \n";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"it is an equilateral triangle ";
    }
    else if( s1==s2 || s2==s3 || s2==s3 ){
        cout<<"it is isosceles";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;
}
