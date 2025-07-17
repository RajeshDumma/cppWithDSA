#include<iostream>
using namespace std;

// Relational operators
int main(){

     int a , b;
     cout<<"Enter the a value: "<<endl;
     cin>> a;
     cout<<"Enter the b value: "<<endl;
     cin>> b;
     cout<<"Is A equal to B? "<<(a == b)<<endl; // 0
     cout<<"Is A not equal to B? "<<(a != b)<<endl; // 1
     cout<<"Is A greater then B? "<<(a > b)<<endl; // 0
     cout<<"Is A less then B? "<<(a < b)<<endl; // 1
     cout<<"Is A greater then or equal to B? "<<(a >= b)<<endl; // 0
     cout<<"Is A less then or equal to B? "<<(a <= b)<<endl; // 1
   return 0;
}