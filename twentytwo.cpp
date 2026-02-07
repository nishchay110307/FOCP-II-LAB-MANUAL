// A jewelry design tool generates hollow diamond outlines for patterns. 
// Implement a solution to display a
// hollow diamond pattern of *.
//  *
// * *
// * *
// * *
// * *
// * *
// * *
// * *
//  *

#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        for (int s = rows; s > i; s--) {
            cout << " "; }
        cout << "*";
        if (i > 1) {
            for (int space = 1; space <= 2 * i - 3; space++) {
                cout << " ";
            }
            cout << "*";}
        cout << endl;
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int s = rows; s > i; s--) {
            cout << " ";  }
        cout << "*";
        if (i > 1) {
            for (int space = 1; space <= 2 * i - 3; space++) {
                cout << " ";
            }
            cout << "*";}
        cout << endl;
    }
    return 0;
}