// https://snakify.org/en/lessons/while_loop/problems/seq_max_chunk_of_repetitions/

#include <iostream>
using namespace std;

int main(){
   int prev, curr, count = 1, maxCount = 1;
   cin>>prev;
   while(cin>>curr && curr != 0){
    if(prev == curr){
        count++;
    } else{
        count = 1;
    }
    if(count > maxCount)
      maxCount = count;

    prev = curr;
   }
   cout<< maxCount <<endl;
    return 0;
}