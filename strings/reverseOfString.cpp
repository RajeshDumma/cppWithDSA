#include <iostream>
using namespace std;

int main() {

    string str = "  hello rajesh  ";
    cout << "Enter the string: "<<endl;
    getline (cin , str);

     string reverse = str;
     reverse = string(str.rbegin(), str.rend());
     /*
     // manual way
      string reverse = "";
    for(int n = 0; n < str.length(); n++){
        reverse = str[n] + reverse;
    } */
    cout << reverse << endl;

    return 0;
}