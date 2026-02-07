//  A registration system rejects usernames that contain spaces or special characters.
//   Write a C++
// program to validate whether a given string can be accepted as a username.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    int valid = 1;

    cout << "Enter username: ";
    cin >> username;
    for (int i = 0; i < username.length(); i++) {
        char ch = username[i];
        if (!((ch >= 'A' && ch <= 'Z') ||
              (ch >= 'a' && ch <= 'z') ||
              (ch >= '0' && ch <= '9'))) {
            valid = 0;
            break;
        }}
    if (valid == 1) {
        cout << "Username is valid";
    } else {
        cout << "Username is invalid";
    }
    return 0;
}