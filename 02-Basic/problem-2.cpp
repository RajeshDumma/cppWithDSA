// Celsius to Fahrenheit conversion
// Formula: F = (C * 9/5) + 32

#include<iostream>
using namespace std;

int main() {
    float c, f;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    f = (c * 9.0 / 5.0) + 32;  // Use 9.0 and 5.0 to avoid integer division

    cout << "Temperature in Fahrenheit: " << f << endl;

    float x, y;
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> x;

    y = (x - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << y << endl;

    return 0;
}
