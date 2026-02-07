// A typing practice app displays the alphabets in pyramid form. 
// Implement a solution to display:
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main() {
    for (char ch = 'A'; ch <= 'E'; ch++) {
        for (char c = 'A'; c <= ch; c++) {
            cout << c;
        }
        cout<<"\n"; }
    return 0;}