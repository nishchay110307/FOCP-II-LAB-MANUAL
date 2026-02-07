// Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
// convert Fahrenheit temperature into Centigrade or vice versa.

#include<iostream>
using namespace std;
int main(){
    float c;
    cout<<"enter the temp in degree celsius";
    cin>>c;
    float f=((c*9)/5)+32;
    cout<<"the converted temp is "<<f;
    return 0;
}