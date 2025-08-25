// Write a function fibonacci(int n) that returns the nth Fibonacci number.

// Example: fibonacci(5) → 5

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int a = 0, b = 1, c ;
    for(int i = 2; i<= n ; i++){
        c = a + b;
        a = b;
        b = c ;
    }
    return c;
}

int main() {
	   int num;
	   cin >> num;
	   
	 cout <<  fibonacci(num) << endl ;
	
  return 0;
}


