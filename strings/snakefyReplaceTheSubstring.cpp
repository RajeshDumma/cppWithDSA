// https://snakify.org/en/lessons/strings_str/problems/replace_substring/
#include <iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);

  /*  string result = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1') result += "one";
        else result += str[i];
    }
    cout << result << endl; */

    // in-Buit method

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1')
        str.replace(i, 1, "one");
        i += 2;
    }
    cout << str <<endl;
    return 0;
}