#include<iostream>
using namespace std;

int main(){

    int a = 22, b = 2;

    cout<<(a<<b)<<endl;
    cout<<(a<<(b&1))<<endl;
    cout<<(a>>(b|1))<<endl;
    cout<<(a>>(b^1))<<endl;



    return 0;
}