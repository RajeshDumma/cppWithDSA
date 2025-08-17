// https://snakify.org/en/lessons/while_loop/problems/least_divisor/

#include <iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int i = 2;
  while(i <= num){
    if(num%i == 0){
    cout<<i<<endl;
    break;
    }
    i++;
  }
    return 0;
}