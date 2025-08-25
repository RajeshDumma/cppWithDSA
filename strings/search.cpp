#include <iostream>
using namespace std;

int main(){
    string str ;
    cout << "Enetr the string: ";
    cin >> str;
    cout << str.length() <<endl;
    cout << "Enetr the character which you want to search: " << endl;
    char search;
    cin >> search;
     
    for(int i = 0; i < str.length();i++){
        if(search == str[i]){
            cout << "the found position is: " << i << endl;
            break;
        }
    }
}