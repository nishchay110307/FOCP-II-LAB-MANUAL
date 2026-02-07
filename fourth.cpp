// Q4. A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.

#include<iostream>
using namespace std;
int main(){
  float i,q,u; //i=item no. q=quantity, u= unit price, f=final price after the discount
  cout<<"enter the item no";
  cin>>i;
  cout<<"enter the quantity for the particular number";
  cin>>q;
  cout<<"enter the unit price";
  cin>>u;
  float final = q*u*0.80;
  cout<<"the final price after discount "<<final;
  return 0;
}