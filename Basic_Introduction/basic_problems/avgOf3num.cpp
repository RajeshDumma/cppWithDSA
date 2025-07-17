#include<iostream>

using namespace std;

int main(){

    int x =10, y = 30, z = 40 ;

    int sum = x + y + z;
    float avg = sum/3.0;

    // another way
   /*
    float sum = x + y + z;
    float avg = sum/3;
    */ 
    cout<<"Total sum : "<<sum<<"\n"<<"Average : "<< avg<<endl;
    return 0;
}