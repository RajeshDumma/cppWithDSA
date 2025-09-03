// string and sreach character;

#include <iostream>
using namespace std;

int main(){
    
    string str;
    cout << "Enter the string: "<<endl;
    getline(cin , str);
    int wordCount = 0;
    bool isWord = false;
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
            if(!isWord){
                wordCount++;
                isWord = true; 
            }
        } else{
            isWord = false;
        }       
    }
    cout << wordCount << endl;
    return 0;
}