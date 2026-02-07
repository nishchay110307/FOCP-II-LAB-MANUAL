// A payroll system maintains employee salary records.
//  Implement a solution to accept salary of
// 10 employees in an array, compute total salary and average salary,
//  then display the result.

#include <iostream>
using namespace std;

int main() {
    int salary[10];
    float total = 0;
    float average;

    cout << "Enter salary of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cin >> salary[i];
        total = total + salary[i];
    }
    average = total / 10;
    cout << "Total Salary = " << total;
    cout << "\nAverage Salary = " << average;
    return 0;
}