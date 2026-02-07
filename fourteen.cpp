// Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
// The program should continue executing based on 
// the user's choice and display the result of each operation.
#include <iostream>
using namespace std;
int main() {
    int choice;
    int num1, num2;
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >>choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1>>num2;
        }
        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2;
                break;
            case 2:
                cout << "Result = " << num1 - num2;
                break;

            case 3:
                cout << "Result = " << num1 * num2;
                break;
            case 4:
                if (num2!= 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Division by zero is not allowed" << endl;
                break;

            case 5:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;       }
    return 0;
}