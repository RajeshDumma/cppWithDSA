#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter the number: "<<endl;
   cin>> num;
   if(num > 0) cout<<"POSITIVE NUMBER"<<endl;
   else if(num < 0) cout<<"NEGITIVE NUMBER"<<endl;
   else if(num == 0) cout<<"ZERO"<<endl;
   else cout<<"Invalid number"<<endl;

    return 0;
}