#include<iostream>
using namespace std;

int main(){

    int a, b;
    a = 10;
    a++;   //a+1 = 11
    b = a++; // 11 will be save in b after that increase the a value will be 12
    b = ++a;

    cout<<"a :"<<a<<endl;  // 12
    cout<<"b :"<<b<<endl;  // 11

    int x, y;

    x = 20;
    y = --x;
    y = x--;

    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;

  int z = 10;
  cout<<"z : "<< z++ <<endl; //10
   cout<<"z : "<< ++z <<endl; // 12
    cout<<"z : "<< z-- <<endl; //12
     cout<<"z : "<< --z <<endl; //10
    return 0;
}