// A learning application analyzes numbers for mathematical properties.
// Design a solution to check whether a given number 
// is a Perfect number or an Armstrong number


#include <iostream>
using namespace std;

int main() {
    int n, temp, digit;
    int sum1 = 0;
    int sum2 = 0;

    cout << "Enter a number: ";
    cin>>n;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum1 = sum1 + i;
        }
    }
    if (sum1 == n)
        cout << "\nPerfect number";
    else
        cout << "\nNot a perfect number";

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum2 = sum2 + digit * digit * digit;
        temp = temp / 10;
    }
    if (sum2 == n)
        cout << "\nArmstrong number" << endl;
    else
        cout << "\nNot an Armstrong number" << endl;
    return 0;
}