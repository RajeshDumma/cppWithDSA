#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to the calculator"<<endl;

    cout<<"a. Addition"<<endl;
    cout<<"b. Subtraction"<<endl;
    cout<<"c. Multiplication"<<endl;
    cout<<"d. Division"<<endl<<endl;
    cout<<"Select your option"<<endl;

    char option;
    cin>> option;
    cout<<"Enter two numbers: "<<endl;
    int num1 , num2;
    cin>>num1>>num2;

    cout<<"Selected option is: "<<option<<" and "<<"numbers are: "<<num1<<" "<<num2<<endl;

    if(option == 'a'){
        cout<<"Additition: "<<(num1+num2)<<endl;
    }
    if(option == 'b'){
        cout<<"Subtraction: "<<(num1-num2)<<endl;
    }
    if(option == 'c'){
        cout<<"Multipliction: "<<(num1*num2)<<endl;
    }
    if(option == 'd'){
        cout<<"Division: "<<(num1/num2)<<endl;
    } else{
        cout<<"Invalid option"<<endl;
    }
    return 0;
}