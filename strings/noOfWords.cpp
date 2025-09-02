#include <iostream>
using namespace std;

int main() {

    string str;
    cout << "Enter the string: "<<endl;
    getline (cin , str);

    int count = 1; // space + 1
    for(int n = 0; n < str.length(); n++){
        if(str[n] == ' '){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}