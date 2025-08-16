// https://snakify.org/en/lessons/while_loop/problems/seq_max/

#include <iostream>
using namespace std;

int main(){
   
    int largestValue = 0;
    while(true){
        int n;
        cin>>n;
        if(n != 0){
            if(largestValue < n)
                largestValue = n; 
        } else{
            break;
        }
    }
     cout<< largestValue <<endl;
    return 0;
}