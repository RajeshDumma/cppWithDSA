#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
int score = 10;
float value = 20.90;
char ch = 'r';
double digit = 123.78965;

score = score + 100;
ch = 'D';
score = score + 100;


cout<<score << "\n" <<value <<"\n"<<"char : "<< ch<< "\n"<< digit<<endl;

  // Print types of variables
    cout << "Type of score: " << typeid(score).name() << endl;
    cout << "Type of value: " << typeid(value).name() << endl;
    cout << "Type of ch: " << typeid(ch).name() << endl;
    cout << "Type of digit: " << typeid(digit).name() << endl;
    return 0;
}