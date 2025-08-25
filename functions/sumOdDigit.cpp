// Write a function sumOfDigits(int n) that returns the sum of digits of a number.

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int);

int main() {
	   
	   int num ;
	   cin >> num ;
	   
	   cout << sumOfDigits(num) << endl;
	
  return 0;
}

int sumOfDigits(int n){
    
    int sum = 0;
    while(n != 0){
        int remainder = n % 10;
        sum += remainder;
        n = n/10;
    }
    return sum;
    // recursion method 
    // return (n == 0) ? 0 : (n % 10) + sumOfDigits(n / 10);
}


