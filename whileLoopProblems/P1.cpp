// https://snakify.org/en/lessons/while_loop/problems/list_of_squares/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int i =1;
    int sum =0;
    while(i * i <= n){
        sum = i*i;
        cout<<sum<<endl;
        i++;
    }
    return 0;
}