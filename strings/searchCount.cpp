#include <iostream>
using namespace std;

int main(){

    string str;
    cout << "Enter the string: " <<endl;
    cin >> str;
     char search;
     cout << "Enter the charcter which you want to search: "<<endl;
     cin >> search;
    int count =0;

    for(int i = 0; i < str.length(); i++){
        if(search == str[i])
          count++;
    }
    cout<< count << endl;
    return 0;
}