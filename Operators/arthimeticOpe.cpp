#include<iostream>
using namespace std;

int main(){
     
    int a, b;
    cout << "Enter the a value: ";
    cin >> a;
    
    cout << "Enter the b value: ";
    cin >> b;

    int add, sub, mul, div, mod;

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;   // Integer division
    mod = a % b;

    cout << "Add: " << add << endl
         << "Sub: " << sub << endl
         << "Mul: " << mul << endl
         << "Div: " << div << endl
         << "Mod: " << mod << endl;

    return 0;
}
