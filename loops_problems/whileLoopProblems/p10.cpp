// https://snakify.org/en/lessons/while_loop/problems/seq_num_even/

#include<iostream>
using namespace std;

int main(){
    int evenCount = 0;
    while(true){
        int n;
        cin>>n;
        if(n != 0){
            if(n%2 == 0)
                evenCount++;     
        } else{
            break;
        }
    }
    cout<<evenCount<<endl;
    return 0;
}