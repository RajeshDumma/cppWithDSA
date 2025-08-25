// Write a function isPalindrome(int n) that checks if a number is palindrome


#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int x){
    
    int orginal = x , reverse = 0;
    
    while(x != 0){
        int remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = x/10;
    }
    return (reverse == orginal);
}

int main() {
	    int num ;
	    cin >> num;
	    
	    if(isPalindrome(num)){
	        cout << "palindrome"<<endl;
	    } else{
	        cout << " Not palindrome"<<endl;
	    }
	
  return 0;
}


