// A stock market app tracks first and second highest stock values. 
// Implement a solution to find the largest
// and second largest number in an array of size 5.

#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int max1, max2;
    cout << "Enter numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    if(arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }
    for(int i = 2; i < 5; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2) {
            max2 = arr[i];
        }}
    cout << "Max 1 is: " << max1 << endl;
    cout << "Max 2 is: " << max2;
    return 0;
}