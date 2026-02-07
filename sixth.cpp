// Q6. An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
// Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
// display results.
#include<iostream>
using namespace std;
int main(){
//main goal is to calculate net salaries with 12%bonus.
//criteria is no. of employees and their basic salaries.
int n;//n=no. of employees,bs=basic salary,b=bonus,final=final salary;
float bs,b,final,netfinal;
cout<<"enter the total no. of employees ";
cin>>n;
cout<<"enter the basic salary of the employees per head  ";
cin>>bs;
b=bs*0.12;
cout<<"bonus per head for every employee is  "<<b<<endl;
final=bs+b;
cout<<"the final salary for the employees per head is  "<<final<<endl;
netfinal=n*final;
cout<<"the total salary of all the employees is "<<netfinal<<endl;
return 0;
}