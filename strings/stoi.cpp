#include <iostream>
using namespace std;

// stoi is string to int
int main(){

    // for stoi = i integer
   // string str = "Gurucodes";
   string str = "60"; // valid_argument
    int a = stoi(str); // invalid_argument , because string number will only conver to int like "30"
    cout << a + 40 << endl; // output will be 100

    // for float number = stof ==> string to float

    string str2 = "12.12";
    float b  = stof(str2);
    cout << str2 <<endl;

    // for double = stod ==> string to double

    string str3 = "14.977221";
     double d = stod(str3);
     cout << str3 << endl;

     // same as long and long long ==> stol , stoll
    return 0; 
}