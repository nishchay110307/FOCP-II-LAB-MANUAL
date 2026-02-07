// Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to 
//compute total
// expenses and apply a discount accordingly.
#include<iostream>
using namespace std;
int main(){
    float price;
    int item;
    cout<<"enter the price";
    cin>>price;
    cout<<"\n enter the total number of items :";
    cin>>item;
    if(item>1000){
        cout<<"the final price is "<<item*price*0.90; 
    }
    else{
        cout<<"price = mrp";
    }
    return 0;
}