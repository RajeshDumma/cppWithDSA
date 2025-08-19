// https://snakify.org/en/lessons/for_loop_range/problems/lost_card/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int misingSum = 0;
    for(int i = 1; i < n; i++){
        int EachNum; 
        cin >> EachNum;
            misingSum += EachNum;
        
    }
  //  cout<<"mising sum : "<< misingSum <<endl;
   int totalSum = (n*(n+1)/2); // 5 , 5*(5+6)/2 = 15
  // cout<<"Total sum : "<<totalSum << endl;
    cout<<"lost Value : "<<totalSum - misingSum <<endl; 
    
    return 0;
}