// https://snakify.org/en/lessons/strings_str/problems/swap_two_words/

#include <iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);

    string firstString = "", secondString = "";
    bool spaceFound = false;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            spaceFound = true;
        }
        if(!spaceFound){
            firstString += str[i];
        }
        else{
            secondString += str[i];
        }
    }
    cout << secondString << " " << firstString <<endl;
    return 0;
}