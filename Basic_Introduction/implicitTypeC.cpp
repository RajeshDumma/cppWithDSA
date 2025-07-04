#include<iostream>

using namespace std;

// implicit type conversions
int main(){

    // example -1
    bool b = false;
    int i = b;
    cout<<"convert bool to int automatically (emplicit method) : "<<b<<endl;

    //example 2
    char ch  = 'r';
    int n = ch;
    cout<<"conver char to int : "<< n <<endl;

    //example 3

    int num = 97;
    char ct = num;
    cout <<"convert int to char : "<< ct <<endl;

    // this implicit type conversion has chances  to loose the data
    return 0;
}
