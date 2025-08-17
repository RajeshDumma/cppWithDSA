//https://snakify.org/en/lessons/while_loop/problems/seq_increasing_neighbours/

#include<iostream>
using namespace std;

int main(){
   int prev , curr, count = 0;
   cin>>prev;
   while(cin>>curr && curr != 0){
    if(curr > prev){
        count++;
    }
    prev = curr;
   }
   cout<< count <<endl;
    return 0;
} 
/*
// second method 

#include<iostream>
using namespace std;

int main(){
   int current, next= 0, count = -1;  // 1 2 3 4 5 0
   while(cin>>current && current != 0){
    if(next - current < 0){
        count++; // 1++ 2
    }
    next = current;
   }
   cout<<count<<endl; 
    return 0;
} */