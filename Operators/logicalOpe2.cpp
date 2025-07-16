#include<iostream>
using namespace std;

int main(){

    int a =20;
    int b = 30;
    int c = 50;

    cout<<"a>=10 && b>=10 ? "<< ( (a>=10)&&(b>=10))<<endl;
     cout<<"!(a>=10 && b>=10 )? "<< !( (a!=10)||(b<=c))<<endl;
    
    return 0;
}