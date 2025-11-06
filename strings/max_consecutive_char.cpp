/*
 given a string find out the maximum number of times 
the any particular character has occured contiguosly in the string
*/

#include <iostream>
using namespace std;

int main(){

    string str;
    cin >> str;
    int maxCount = 1 , count = 1;
    char maxChar = str[0];
    for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == str[i+1]){
            count++;
            if(count > maxCount) maxCount = count;
            maxChar = str[i];
        } else {
            count = 1;
        }
    }
     cout << "Character: " << maxChar << ", Count: " << maxCount << endl;
    return 0;
}