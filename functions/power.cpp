// Write a function power(int base, int exp) that returns base^exp
// (without using pow() function).

#include <bits/stdc++.h>
using namespace std;

int power(int base, int expe){
    
  //   return pow(x, y);
  int result = 1;
  for(int i = 0 ; i < expe ; i++){
      result *= base;
  }
  return result;
}

int main() {
	   
	   int base , expe ;
	   cin >> base >> expe ;
	   
	 cout <<  power(base, expe) << endl ;
	
  return 0;
}


