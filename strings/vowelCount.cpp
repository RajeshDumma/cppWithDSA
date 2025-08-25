#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter the string: "<<endl;
    cin >> str;
     int vowelCount = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] =='a' || str[i] =='A' || str[i] =='i' || str[i] =='I' 
        || str[i] =='e' || str[i] =='E' || str[i] =='o' || str[i] =='O' || 
    str[i] =='u' || str[i] =='U'){
        vowelCount++;
    }
    }
    cout << vowelCount << endl;
    
}