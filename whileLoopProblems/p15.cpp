// https://snakify.org/en/lessons/while_loop/problems/is_fibonacci/

#include <iostream>
using namespace std;

int main(){
 int n;
 cin>> n;

 if(n == 0){
    cout<< 0 <<endl;
    return 0;
 }
 if(n == 1){
    cout<< 1 <<endl;
    return 0;
 }

 int index = 1;
 int f0 = 0, f1 = 1, f2;
 while(f1 < n){
    f2 = f0 + f1;
    f0 = f1;
    f1 = f2;
    index++;
 } 
 if(f1 == n){
    cout << index <<endl;
 } else{
    cout<< -1 <<endl;
 }

    return 0;
}