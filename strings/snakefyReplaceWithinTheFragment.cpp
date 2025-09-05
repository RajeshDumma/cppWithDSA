// https://snakify.org/en/lessons/strings_str/problems/replace_inside_fragment

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    getline(cin, str);
    
    int first = -1 , last = -1;
    
    // in-buit method
  /*  int first = str.find('h');
    int last = str.rfind('h');
    
    string result = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'h' && i != first && i != last){
            result += "H";
        }
        else result += str[i];
    }
    cout << result << endl;*/
    
    // manual method
    for(int  i = 0; i < str.size(); i++){
        if(str[i] == 'h'){
            if(first == -1) first = i;
            
            last = i;
        }
    }
    
    string result = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] =='h' && i != first && i != last){
            result += 'H';
        }else{
            result += str[i];
        }
    }
    cout << result << endl;
    return 0;
}
