#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "rajesh";
    sort(str.begin() , str.end()); // asseding order like aehjrs
    cout << str << endl;

    string str2= "Gurucodes";
    sort(str2.begin(), str2.end() , greater<char>()); // decesding order like uuroedcG
    cout << "str2: " << str2 <<endl;
    return 0;
}
