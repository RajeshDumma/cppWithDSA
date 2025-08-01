#include<iostream>
using namespace std;

int main(){

    int a , b , c;
    cout<<"Enter two numbers: "<<endl;
    cin>> a >> b >> c;
    int ans = 1;

    if(a == b && b == c){
        ans = 3;
    }
    if(a == b || a == c || b == c){
        ans = 2;
    } 
    

    cout<<ans <<endl;
    return 0;
}