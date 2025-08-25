#include <iostream>
using namespace std;

int main(){

    string str = "rajesh";
    str = "D." + str;
    cout<< str <<endl;

    // string Manipulation

    // 1. append or concatenation

    string str2 = "vamshi";
    str2.append(str);
    cout<< "append: "<<str2 << endl; // added two strings into a one string

    string str3 = "srinu";
   // str3.at(2);
    cout<< "at: "<<str3.at(2) <<endl; // accessing the position of a character

    string str4 ="jason";
    str4.push_back('i');  // added a character for the last
    cout<< "push _back: " <<str4 <<endl;

    str4.pop_back();
    cout <<"pop_back: "<< str4 <<endl; // remove the last character ;

    string str5 = "guruc";
    str5.back() ='a';  // repla the last character
    cout<< "back(): "<< str5 << endl;

    // syntax for insert : string.insert(position, count, character);
    string str6 = "rajesh";
    str6.insert(6,1 ,'D');
    cout<< "Insert: " << str6 << endl;

    // syntax : str.erase(position, length); or Delete also.....

    string str7 = "rajeshYadu";
    str7.erase(6,5);
    cout << "str.erase: " << str7 << endl;
     
    return 0;
}