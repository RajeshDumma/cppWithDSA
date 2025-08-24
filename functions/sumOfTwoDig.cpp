// Write a function add(int a, int b) that returns the sum of two numbers.

#include <iostream>
using namespace std;
int sumOfTwoDig(int , int);

int main(){
   
    int x , y;
    cout<<"Enter the values"<<endl;
    cin >> x >> y;
  cout<< sumOfTwoDig(x, y)<<endl;
    return 0;
}

int sumOfTwoDig(int a, int b){
    return a + b;
}