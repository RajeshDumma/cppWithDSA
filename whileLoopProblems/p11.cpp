//https://snakify.org/en/lessons/while_loop/problems/seq_increasing_neighbours/

#include<iostream>
using namespace std;

int main(){
    int serialCount = 0;
    int lagerstValue = 1;
    while(true){
        int n;  // 1 2 3 4 5 0
        cin>>n;
        if(lagerstValue <= n){
            lagerstValue = n;
            serialCount++;
        } else{
            break;
        }
    }
    cout<<serialCount <<endl;
    return 0;
}