// Given a string interpretit as a binary string and convert it to a whole number

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string str ;
    cin >> str;

    int sum = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[str.length()-i-1] == '1')
        sum += pow(2, i); // its for small problem
      //  sum += (1LL << i)  // its for large problem
    }
    cout << sum <<endl;
    return 0;
}
