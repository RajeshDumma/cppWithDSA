// https://snakify.org/en/lessons/strings_str/problems/slices/

#include <iostream>
using namespace std;

int main(){
    
    string str;
    cin >> str;
    
    // 1st Line third character
    cout << str[2] << endl;
    
    // 2nd line second character to last character
    
     cout <<str[str.length() - 2 ] << endl;
    
  
    
    // 3rd line first five character;
    cout << str.substr(0, 5) << endl;
    
    // 4th line print all but last two characters
    cout << str.substr(0, str.length()-2) << endl;
    
    // 5th line  even indices
    for(int i =0; i < str.length(); i++){
        if(i % 2 == 0)
        cout << str[i] ;
    }
    cout << endl;
    
    // 6th line  odd indices
    
    for(int i = 0; i < str.length(); i++){
        if(i % 2 != 0)
        cout << str[i];
    }
    cout << endl;
    
    // 7nth line reverse string
    string reverse = str;
    reverse = string(str.rbegin(), str.rend());
    cout << reverse <<endl;
    
    // 8th line 2nd character reversed order starting to last one
    for(int i = str.length() - 1; i >= 0; i= i - 2){
       cout << str[i];
    }
    cout << endl;
    
    // 9th line length of string;
    
    cout << str.length() << endl;
    
    return 0;
}