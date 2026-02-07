// Q5. A student wants to swap the values of two variables for practising coding basics.
// Implement a solution to swap two numbers using different techniques.

#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"select which way you want";
    cout<<"\n1. Third variable \n2. Addition subtraction \n3. Multiply division \n4. Bitwise operator ";
   
    cin>>choice;
    int a,b,temp;
    cout<<"enter the value of a ";
           cin>>a;
           cout<<"enter the value of b ";
           cin>>b;
    switch (choice){
   case 1: 
        
           temp=a;
           a=b;
           b=temp;
           cout<<"a is"<<a<<endl;
           cout<<"b is"<<b;
break;
case 2:a = a + b;
b = a - b;
a = a - b;


       cout<<"a is "<<a<<endl;
       cout<<"b is "<<b;

       break;
       
case 3: a = a * b;  
    b = a / b;   
    a = a / b;   

    cout << "a = " << a << ", b = " << b;
    break;

case 4:cout<<"atta nahi h karna ";
}
    return 0;
}