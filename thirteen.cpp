// A mathematics tool computes the exact roots of a quadratic equation for teaching purposes.
//  Implement a solution to calculate the roots of a quadratic equation

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    float discriminant, root1, root2;
    cout << "Enter values of a, b and c: ";
    cin >>a>>b>>c;
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two real roots: " << root1 << " and " << root2;  }
    else if (discriminant == 0) {
        root1 = -b /(2*a);
        cout << "One real root: " << root1;}
    else {
     cout << "No real roots";
    }
    return 0;}