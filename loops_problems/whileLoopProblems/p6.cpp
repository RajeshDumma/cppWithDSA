// https://snakify.org/en/lessons/while_loop/problems/eq_sum/

#include<iostream>
using namespace std;

int main(){
    int sum =0;
    while(true){
        int n;
        cin>>n;
        if(n != 0){
            sum += n;
        } else{
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}