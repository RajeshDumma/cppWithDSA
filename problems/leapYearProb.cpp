#include<iostream>
using namespace std;

int main(){
   
    int year;
    cin>> year;

    bool isLeapYear = false;

    if((year%4 == 0 && year%100 != 0) ||(year%400 == 0)){
        isLeapYear = true;
    }

    cout<<isLeapYear<<endl;
    return 0;
}