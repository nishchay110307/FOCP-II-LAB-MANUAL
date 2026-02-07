//  A CAD tool generates rectangular hollow frames.
//   Implement a solution to display:
// ********
// *      *
// *      *
// *      *
// *      * 
// *      *
// *      *
// ********

#include<iostream>
using namespace std;
 
int main(){
for(int i=1 ; i<9 ; i++){
for( int j=1 ; j<9 ; j++){
    if( i ==1 || j==1 || i==8 || j==8){
        cout<<"*";
    }
    else
    cout<<" ";
}
cout<<"\n";
}
return 0;
}