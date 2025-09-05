// manual and in-build methodes using

// in-build method 
// https://snakify.org/en/lessons/strings_str/problems/remove_fragment/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline (cin, str);
	
    // simple formate use find and rfind
  //  int firstIndex = str.find('h');
//	int lastIndex = str.rfind('h');
//	str = str.erase(firstIndex , lastIndex - firstIndex + 1);	
//	cout << str << endl;
	cout << " length: " << str.length() <<" "<< str << endl;
	
	int index1 = 0;
	int index2 = 0;
	
	for(int i = 0 ; i < str.length(); i++){
	    if(str[i] == 'h'){
	        index1 = i;
	        break;
	    }
	}
	for(int i = str.length()-1; i >= 0; i--){
	    if(str[i] == 'h'){
	        index2 = i;
	        break;
	    }
	}
	str = str.erase(index1 , index2 - index1 + 1);
	cout << str << endl;
   return 0;
}
*/

// manual method

#include <iostream>
using namespace std;

int main(){
    string str;
    getline (cin, str);

    int firstIndex = -1, lastIndex = -1;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'h'){
            firstIndex = i;
            break;
        }
    }
    for(int i = str.size() - 1; i >=0; i--){
        if(str[i] =='h'){
            lastIndex = i;
            break;
        }
    }
    string result ="";
    for(int i = 0; i < firstIndex; i++){
        result += str[i];
    }
    for(int i = lastIndex + 1; i < str.size(); i++){ 
        // for last = 7; so it will count h value also so last + 1, start last+1,it store after h value
        result += str[i];
    }
    cout << result << endl;
    return 0;
}