#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    string original = str;
    int n = str.length(); // 4

    int rotations = 0;
    for (int i = 0; i < n; i++) {
        // rotate right by 1
        str = str.substr(n-1, 1) + str.substr(0, n-1); //abab , b + aba
        rotations++;

        if (str == original) {
            cout << "It takes " << rotations << " rotations to return to original." << endl;
            break;
        }
    }

    return 0;
}
