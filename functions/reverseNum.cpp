// Write a function reverseNumber(int n) that returns the reverse of a number.
// Example: reverseNumber(1234) → 4321

#include <iostream>
using namespace std;

int reverseNumber(int);

int main(){
    int num;
    cin >> num;
    cout<< reverseNumber(num) <<endl;
    return 0;
}

int reverseNumber(int n){
    int reverse = 0;
    bool isNegative = (n < 0);
    n = abs(n);
    
    while (n != 0){
      int remainder = n%10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }
    return isNegative ? -reverse : reverse ;
    
}