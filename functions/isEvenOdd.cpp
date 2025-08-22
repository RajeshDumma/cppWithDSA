#include <iostream>
using namespace std;

void isEvenOdd(int x){
    string result = (x%2 == 0) ? "Even" : "Odd";
    cout<< result <<endl;
}

int main(){

    int num;
    cin >> num;
    isEvenOdd(num);
    return 0;
}