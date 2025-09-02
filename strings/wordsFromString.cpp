// String palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline (cin, str);
    string tempString = "";
   for(int i = 0; i< str.length(); i++){
       if(str[i] != ' '){
           tempString += str[i];
       } else if(str[i] == ' '){
           cout << tempString <<endl;
           tempString = "";
       }
   }
    cout << tempString <<endl;   
    return 0;
}