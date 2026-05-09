#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a=10,b=0;
    try{
    if(b==0)
        throw "division by zero is not allowed";
        throw 404;
        cout<<"\n Result : "<<a/b;
    }
    catch(const char*msg){
        cout<<msg;
    }
    catch(...){                        //this catch should always be the last catch or else error will come
        cout<<"\n this is generic catch";  //this is the general catch that can be used for all the issue 
    }
    cout<<"\n this is normal line of code";
    return 0;
}
