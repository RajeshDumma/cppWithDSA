// https://snakify.org/en/lessons/while_loop/problems/seq_index_of_max/

#include <iostream>
using namespace std;

int main(){
  int n;
   cin>>n;
   int max = n;
   int index = 1;
   int ans = index;
   while(n != 0){
    cin>>n;
    index++;
    if(max < n){
        max = n;
        ans = index;
    }
   }
   cout<<ans <<endl;
    return 0;
}