// https://learn.gurucodes.dev/s/courses/669bde8a1bd2ce609901de59/take

#include<iostream>
using namespace std;

int main(){
  int initial, ending;
  cin>>initial>>ending;   // 10 20
  int noOfDaysRequired =1;
  float nextDay = initial;  // nextDay = 10
  while(nextDay < ending){  // 10 < 20
    noOfDaysRequired++; // 2
    nextDay += (nextDay*0.1);  // nextDay + 0.1 * 10 
  }
  cout<<noOfDaysRequired<<endl;
    return 0;
}