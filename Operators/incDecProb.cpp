#include<iostream>
using namespace std;

int main(){

    int a = 20, b = 6;
    a++;
    b++;
    a++;
    cout<<"a : "<<a<<", b : "<<b<<endl;

    int k = 3;
    string pre = (k == k++)? "y":"n";
    string pos = (k == ++k)? "y":"n";

    cout<< pre <<" ,"<<pos<<endl;
    return 0;
}