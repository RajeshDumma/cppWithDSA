#include<iostream>
using namespace std;

int main(){

    int a , b , c;
    cout<<"Enter numbers: "<<endl;
    cin>> a >> b >> c;

    if(a == b && a == c) cout<<3<<endl;
    else if(a == b || b == c || c == a) cout<<2<<endl;
    else cout<<1<<endl;

    return 0;
}