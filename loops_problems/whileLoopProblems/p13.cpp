// https://snakify.org/en/lessons/while_loop/problems/seq_num_maximal/

#include <iostream>
using namespace std;

int main(){
   int max = 0;  
   int maxCount = 0;
   while(true){
    int num;   // 1 2 3 2 3 3 3 0
    cin>>num;
    if(num == 0){
        break;
    }
    if(num > max){ 
        max = num;  
        maxCount =1;
    }else if(num == max){
        maxCount++;
    }
   }
   cout<<maxCount <<endl;
    return 0;
}