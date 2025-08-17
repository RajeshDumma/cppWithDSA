// prime number problem

#include <iostream>
using namespace std;

int amin(){
     int n;
     cin >> n;
     bool prime = true;
     if(n <= 1){
        prime = false;
     } else{
        int i = 2;
        while(i * i <= n){
            if(i%n == 0){
                prime = false;
                break;
            }
            i++;
        }
     }
     cout<<(prime ? "YES" : "NO")<<endl;
    return 0;
}