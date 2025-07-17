#include<iostream>

using namespace std;

// explict Type conversition
int main(){
  //sample examples
    cout<<3/2<<endl; // loose the data 1
    cout<<3.0/2<<endl; // float / int = float
    cout<<3/2.0<<endl; // int / float = float
    cout<<(float)3/2<<endl; 

    // example 

    float x = 2.5;
    int y = (int) x;

    cout <<"y = " << y <<endl;



    // example -3

    int i =10;
    int j = 3;
    float z =0;
    z = i / j;
    cout <<"z = "<< z <<endl; // lost the data

    z = (float)i/j;
    cout <<"z = "<< z <<endl;
    int a =10 ;
    float b = 2.20;

    int c = a + b;
    cout << "Explicit type conversition : "<<c<<endl;
    /* check here the result will be 12 but here data will lost because int + float = int,
    so the data should be int
       */
       // we can put explicitly 
      

    return 0;
}