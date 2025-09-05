// https://snakify.org/en/lessons/strings_str/problems/second_occurrence/

#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;

    int count = 0;
    int IndexVal = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'f'){
            count++;
            IndexVal = i;
            if(count == 2)
            break;
        }
    }
    if(count == 0) cout << -2 <<endl;
    else if(count == 1) cout << -1 <<endl;
    else cout << IndexVal <<endl;
    
    return 0;
}