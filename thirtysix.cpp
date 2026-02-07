// A machine learning model multiplies matrices for neural network layers. 
// Implement a solution
// to multiply two matrices of order m×n and p×q (if valid).

#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;
    if (n != p) {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }}
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }}
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }}
    cout << "Resultant matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}