// https://snakify.org/en/lessons/while_loop/problems/seq_second_max/

#include <iostream>
using namespace std;

int main(){
   int max = 0;
   int secondMax = 0;

   while(true){
    int n;  // 1 2 3 4 9 7 0
    cin>>n;

    if(n == 0){
        break;
    }
    if(n > max ){
         secondMax = max;
         max = n;
    } else if (n > secondMax && n < max) {
        secondMax = n;
    }
       
   }
    cout<<secondMax<<endl;
    return 0;
}

