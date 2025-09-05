// https://snakify.org/en/lessons/strings_str/problems/delete_every_third_char/

#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(i == 0) continue;
        if(i % 3 != 0)
        cout<< str[i];
    }


   /* string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (i == 0) continue;          // skip first char
        if (i % 3 != 0)  // skip every 3rd char (1-based)
        result += str[i];
    }
    cout << result << endl;*/
    return 0;
}