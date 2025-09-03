// sub string practice

#include <iostream>
using namespace std;

int main(){
    string str = "Hello World";
   
    cout << str.length() <<endl; // 11
    cout << str.substr(0, 5) << endl; // 0 t0 5
    cout << str.substr(6) << endl; // index 6 to upto end
    cout << str.substr(3,4) <<endl; // ind 3 to 4 length
    cout << str.substr(str.length() - 3)<<endl; // (11 - 3 = 8) index 8 to upto end
}