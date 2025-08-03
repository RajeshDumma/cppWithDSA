#include<iostream>
using namespace std;

int main(){

    int age ;
    cout<<"Enter your age: "<<endl;
    cin>> age;

    if(age < 13){
        cout<<"Is a Toddler"<<endl;
    } else if(age >= 13 && age < 18){
        cout<<"Is a Teenager"<<endl;
    } else if(age >= 18 && age < 60){
        cout<<"Is an Adult"<<endl;
    }else if (age > 60 && age <= 100){
        cout<<"Is an senior Citizen"<<endl;
    }else{
        cout<<"Invaild age"<<endl;
    }
    return 0;
}