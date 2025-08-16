#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x = 0;
    int value = 1; // 2^0 = 1

    while (value * 2 <= N) {
        value *= 2; // multiply by 2
        x++;        // increase exponent
    }

    cout << x << " " << value << endl;

    return 0;
}
