#include <iostream>
using namespace std;

int main(){

    string str;
    getline (cin, str);

    string maxLengthString = "";
    string tempString = "";

    for(int i = 0; i <= str.length(); i++){
        if(i == str.length() || str[i] == ' '){
           if(tempString.length() > maxLengthString.length()){
            maxLengthString = tempString ;
           }

           tempString = ""; // repeat for the next word
        } else {
            tempString += str[i];
        }
    }
    cout << maxLengthString <<endl;
    return 0;
}


//  my method

#include <iostream>

using namespace std;

int main(){
    
    string str;
    getline(cin, str);   // hello rajesh // 12
    
    string maxLengthString = "";
    string tempString = "";
    int currentWordLength = 0;
    
    for(int i = 0; i< str.length(); i++){
        currentWordLength++;  // 5
         if(str[i] == ' '){
        if(currentWordLength > maxLengthString.length()){
            maxLengthString = tempString;
        }   
           currentWordLength = 0;
             tempString = ""; // repeat for the next word
         } else{
             tempString = tempString + str[i];  // hello
         }
    } 
    if(currentWordLength > maxLengthString.length()){  // this only for last word
        maxLengthString = tempString;
    }
    
    cout << currentWordLength <<" "<< maxLengthString << endl;
    
    return 0;
}