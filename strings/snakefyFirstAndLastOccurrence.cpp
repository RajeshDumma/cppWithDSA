// https://snakify.org/en/lessons/strings_str/problems/first_and_last_occurrences/

#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int firstIndex = -1, lastIndex = -1;

    for(int i =0; i < str.length(); i++){
        if(str[i] == 'f'){
            firstIndex = i;
            break;
        }
    }     
    for(int i = str.length() - 1; i++){
        if(str[i] == 'f'){
            lastIndex = i;
            break;
        }
    }
    if(firstIndex == -1){
        // nothing
    } else if(firstIndex == lastIndex){
        cout << firstIndex;
    } else{
        cout << firstIndex << " "<< lastIndex; 
    }
    return 0;
}

// second method;
/*
    firstIndex = str.find('f');
    lastIndex = str.rfind('f');

     if(firstIndex == -1){
        // nothing
    } else if(firstIndex == lastIndex){
        cout << firstIndex;
    } else{
        cout << firstIndex << " "<< lastIndex; 
    }
        */