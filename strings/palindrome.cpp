#include <iostream>
using namespace std;
string ispalindrome(string);

int main(){
    string str;
    cout << "Enter the string: "<<endl;
    cin >> str;
   string stringRev = "";
   for(int i = 0; i < str.length(); i++){
        stringRev = str[i] + stringRev;
   }
    cout <<( (str == stringRev) ? "Palindrome" : "Not palindrome")<<endl;

    return 0;

}

// using function

/*
#include <iostream>
using namespace std;

bool ispalindrome(string input);

int main(){
    string str;
    cout << "Enter the string"<<endl;
    getline(cin , str);
    
    cout << (ispalindrome(str) ? "palindrome" : "Not palindrome") << endl;

    return 0;
}

bool ispalindrome(string str){
    
    string reverseStr = "";
    for(int i = 0; i < str.length(); i++){
        reverseStr = str[i] + reverseStr;
    }
    
    return str == reverseStr;
}
*/

// String palindrome or not
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline (cin, str);
    
    string reverse = str;
    reverse = string(str.rbegin(), str.rend());
   cout << ((str == reverse) ? "Palindrome" : "Not palindrome");
    
    
    return 0;
}