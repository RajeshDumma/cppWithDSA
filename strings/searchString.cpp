#include <iostream>
using namespace std;

int main(){

    string str ;
    cin >> str;

    string searchString ;
    cin >> searchString;

    bool isFound = false;
    for(int i = 0; i <= str.length() - searchString.length(); i++){
        if(str.substr(i, searchString.length()) == searchString){
            isFound = true;
            break;
        }
    }
    cout << ((isFound) ? "Found" : "Not Found")<< endl;
    return 0;
}