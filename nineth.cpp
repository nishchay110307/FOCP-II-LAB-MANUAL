// Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
// solution to classify the symbol.
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter the input";
cin>>ch;
if (ch>='0' && ch<='9')
{
    cout<<"the input is a number";
}
else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
    cout<<"the input is a vowel";
}
else if(ch>='a' && ch<='z'){
    cout<<"the input is consonant";
}
else{
    cout<<"invalid input";
}
return 0;
}