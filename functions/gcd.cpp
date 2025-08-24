// Write a function gcd(int a, int b) that returns the Greatest Common Divisor (HCF)

#include <iostream>
using namespace std;

int gcd(int , int);

int main(){
    
    int num1, num2;
    cin >> num1 >> num2;
    
    cout <<" Greatest Common Divisor is : "<< gcd(num1 , num2) <<endl;
}


int gcd(int n1, int n2){
    
    int minValue = min(n1, n2);
    int gcdNo = 0;
    
    for(int i = 1; i <= minValue; i++){
        if((n1%i == 0) && (n2%i == 0)){
            gcdNo = i;
        }
    }
    return gcdNo;
}

/* 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Euclidean algorithm for HCF
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;

    // LCM formula
    int lcm = (a * b) / hcf;

    cout << lcm << endl;
    return 0;
}

*/
/*
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);  // recursive call
}

*/