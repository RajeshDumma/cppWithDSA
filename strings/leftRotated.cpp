#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int noOfRotation;
    cout << "No of rotation do you want"<<endl;
    cin >> noOfRotation;  

    int n = str.length();
    noOfRotation = noOfRotation % n;
    string rotateString = "";
    string firstHalf = str.substr(n - noOfRotation , noOfRotation);
    string secondHalf = str.substr(0, n - noOfRotation);

    rotateString = firstHalf + secondHalf;

    cout << rotateString << endl;
    return 0;
}
