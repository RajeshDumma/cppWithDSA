#include<iostream>
#include<limits.h>
#include<float.h>
// if you want these file are in one included file that is "#include <bits/stdc++.h>"
using namespace std;

int main(){

    cout<<"Integer : "<< INT_MIN<<" TO "<<INT_MAX<<endl;
    cout<<"Float : "<< FLT_MIN<<" TO "<<FLT_MAX<<endl; // float and double is included in limits.h , its included in float.h file
    cout<<"Character :"<< CHAR_MIN<<" TO "<<CHAR_MAX<<endl;
    cout<<"Long Integer :" << LLONG_MIN<<" TO "<<LLONG_MAX<<endl;
        return 0;
}