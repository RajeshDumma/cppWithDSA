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
    int n;
    cin>> n;
	isPrime(n);

}
