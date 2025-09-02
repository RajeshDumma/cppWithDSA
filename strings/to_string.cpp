#include <iostream>
using namespace std;

int main(){
   // to_string is used to convert any number into a string
     int a = 30;
     string str = to_string(a); // int will convert string
       string str2 = "";
    //   str2 += a; // cannt work because two different data types (string + int)
       str2 += str;  // sting + string , same data types it will work 
     cout << str2 << endl;
    return 0;
}