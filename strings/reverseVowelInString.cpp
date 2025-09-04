#include <iostream>
using namespace std;

bool isVowel(char input);

int main(){
    
    string str;
    getline(cin, str);
    
    string vowelString = "";
    
    for(int i = 0; i < str.length(); i++){
        if(isVowel(str[i])){
            vowelString = str[i] + vowelString;
        }
    }
     for(int i = 0 , j = 0; i < str.length(); i++){
        if(isVowel(str[i])){
             str[i] = vowelString[j];
             j++;
        }
     }
     
     cout << str << endl;
    return 0;
}

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ;
}