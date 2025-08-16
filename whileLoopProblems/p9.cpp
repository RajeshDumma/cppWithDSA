// https://snakify.org/en/lessons/while_loop/problems/seq_index_of_max/

#include <iostream>
using namespace std;

int main(){
   int indexValue = 1;
   int largestValue = 0;
   while(true){
    int n;
    cin>> n;
     if(n != 0){
        if(largestValue < n){
            largestValue = n;
            indexValue++;
        }
     } else{
        break;
     }
   }
   cout<< indexValue-1 <<endl;
    return 0;
}