// prime number problem

#include <iostream>
using namespace std;

int main(){
     int n;
     cin >> n;
     bool prime = true;
     if(n <= 1){
        prime = false;
     } else{
        int i = 2;
        while(i * i <= n){
            if(n%i == 0){
                prime = false;
                break;
            }
            i++;
        }
     }
     cout<<(prime ? "prime" : "Not prime")<<endl;
    return 0;
}