#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        // spaces
        for(int space = 0; space < rows - i - 1; space++){
            cout << "  ";
        }

        int num = i + 1;  // starting number
        for(int j = 0; j < 2*i + 1; j++){
            if (j <= i) {            // first half → include the peak
                cout << num++ << " ";
            } else {                  // second half → avoid duplicating peak
                if (j == i + 1) num -= 2;   // jump back once
                cout << num-- << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

