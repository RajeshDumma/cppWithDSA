// https://snakify.org/en/lessons/strings_str/problems/two_halves/

#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;
     
    int mid = (str.length() + 1) / 2;
    string firstString = str.substr(0,mid);
    string secondString = str.substr(mid);
    cout << secondString + firstString <<endl;

    return 0;
}