#include<iostream>
using namespace std;
int main(){

    int a ,b;
    cout<<"Enter a value: "<<endl;
    cin>>a;
    cout<<"Enter b value: "<<endl;
    cin>>b;
    cout<<"a | b ? "<<(a|b)<<endl;
    cout<<"a & b? "<<(a&b)<<endl;
    cout<<"a ^ b? "<<(a^b)<<endl;
    cout<<"a >> ? "<<(a>>1)<<endl;
    cout<<"a <<? "<<(a<<1)<<endl;
    cout<<"~a ? "<<(~a)<<endl;
    return 0;
}