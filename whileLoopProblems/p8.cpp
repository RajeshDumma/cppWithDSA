// https://snakify.org/en/lessons/while_loop/problems/seq_max/

#include <iostream>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    int largestValue = n;
    while(n != 0){
        cin>>n;
        if(n != 0 && lagerstValue < n){
                largestValue = n; 
        }
    }
     cout<< largestValue <<endl;
    return 0;
}