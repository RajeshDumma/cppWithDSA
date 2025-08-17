// palindrome problem 

#include <iostream>
using namespace std;

int main(){
   int n;
   cin>> n;
   int orginal = n, reversed = 0;
   while(n > 0){
    int digit = n%10;
    reversed = reversed * 10 + digit;
    n /=10;
   }
   if(orginal == reversed){
          cout<<"Yes"<<endl;  
         }else{
            cout<<"NO"<<endl;
         }

    return 0;
}