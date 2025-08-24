#include <bits/stdc++.h>
using namespace std;

void isPrime(int x){
    bool isPrime = true;
    if(x <= 1){
        isPrime = false;
    }
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<x<<" is a prime Number\n";
    } else{
        cout<<x<<" is not a prime Number\n";
    }
}
int main() {
    int n =10;
  //  cin>> n;
	isPrime(n);

}


/*
// Write a function isPrime(int n) that returns true if the number is prime, else false.

#include <iostream>
using namespace std;
bool isprime (int);

int main(){
    int num;
    cin >> num ;   
    cout << (isprime(num) ? "true" : "false")<<endl;
    return 0;
}
bool isprime(int n){
    bool isprime = true;
    if(n <= 1) return false;

    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return  false;
    }
    return true ;
}
*/