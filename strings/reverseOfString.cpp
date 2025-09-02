#include <iostream>
using namespace std;

int main(){
     string str;
     cout << "Enter the string: "<<endl;
     cin >> str;

     string reverseStr = "";
     for(int i = 0; i < str.length(); i++){
        reverseStr = str[i] + reverseStr;
     }
     cout << reverseStr << endl;
    return 0;
}