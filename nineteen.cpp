// . A network security system generates prime numbers in a range
//  for encryption key pools. Implement a
// solution to find all prime numbers within a given range.


#include <iostream>
using namespace std;

int main() {
    int start, end;
    int flag;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        flag = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;}
        }
        if (flag == 1)
            cout << num << " ";
    }
    return 0;
}