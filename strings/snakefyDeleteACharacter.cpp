// https://snakify.org/en/lessons/strings_str/problems/delete_character/

#include <iostream>
using namespace std;
int main(){

    string str;
    getline(cin , str);

    string result = "";
    for(int i =0; i < str.size() ; i++){
        if(str[i] != '@')
        result += str[i];
    }
    cout << result << endl;
    return 0;
}