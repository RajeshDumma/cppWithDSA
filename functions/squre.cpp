// Write a function square(int n) that returns the square of a number.

#include <iostream>
using namespace std;

int square(int);

int main(){
    int num ;
     cin >> num;
     cout << square(num) <<endl;
}

int square(int x){ // for large num long long
    return x*x;
}