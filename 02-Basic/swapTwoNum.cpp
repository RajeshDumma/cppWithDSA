#include<iostream>
using namespace std;


// swap two numbers without using third variable.
int main(){

    int a , b ;
    cout<<"Enter the numbers: "<<endl;
    cin>> a >> b;
    cout<<"Before swap "<<endl;
    cout<<"a : "<<a<<", b : " <<b<<endl;
    a = b - a; // a = 10 , b = 2
    b = b - a;
    a = a + b;
     cout<<"After swap "<<endl;
    cout<<"a : "<<a<<", b : " <<b<<endl;

    return 0;

}