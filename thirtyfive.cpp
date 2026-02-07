//  A data analytics tool flips rows and columns for better visualization. 
//  Implement a solution to
// store a 3×3 matrix and compute its transpose.

#include <iostream>
using namespace std;

int main() {
    int a[3][3], t[3][3];

    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }}
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = a[i][j];
        }}
    cout << "Transpose of the matrix :\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << t[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}