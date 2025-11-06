// maximum consecutive occurrences 
// input : hello world; // char = l;
// output : 2;

#include <iostream>
using namespace std;
int main(){

    string str;
    getline(cin, str);
    char ch;
    cin >> ch;

    int maxCount = 0 , count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ch){
            count++;
            if(count > maxCount){
                 maxCount = count;
            }
        } else {
            count = 0;
        }         
    }
    cout << maxCount <<endl;
    return 0;
}