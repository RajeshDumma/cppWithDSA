// Write a function factorial(int n) that returns the factorial of a number.

#include <iostream>
using namespace std;

int factorial (int);

int main(){
    
    int num;
    cin >> num;
    
    cout << factorial(num) << endl;
}
 
 int factorial(int x){
     if(x == 0 || x == 1){
         return 1;
     }
     int fact = 1;
     for(int i = x; i >= 1; i--){
         fact *= i;
     }
     return fact ;
     /*
     
     // recursive function
     
     int factorial(n){
         if(n == 0 || n ==1)
             return 1;
             
             return n * factorial(n-1);
    }
             */
         
 }
 
 
