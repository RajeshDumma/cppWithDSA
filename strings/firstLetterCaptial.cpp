// Given a string interpretit as a binary string and convert it to a whole number

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {   // first char or after space
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;  // to uppercase
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;  // to lowercase
            }
        }
    }

    cout << str << endl;
    return 0;
}
