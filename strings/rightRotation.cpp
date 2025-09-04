#include <iostream>
using namespace std;

int main(){

    string str;  // rajesh
    cin >> str;
    int noOfRotation;
    cin >> noOfRotation;

    string rotatedSting = "";
    int n = str.length();
    noOfRotation = noOfRotation % n;  

    string firstHalf = str.substr(noOfRotation , n - noOfRotation); // pos 2 , len 6 - 2 = 4 , jesh
    string secondHalf = str.substr(0, noOfRotation);
  
     cout << (rotatedSting = firstHalf + secondHalf) << endl;
    return 0;
}