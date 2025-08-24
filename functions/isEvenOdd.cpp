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


/*
// Write a function isEven(int n) that returns true if the number is even, otherwise false.


#include <iostream>

using namespace std;

bool isEven(int);

int main(){
    int x ;
    cout << "Enter the number : "<<endl;
    cin >> x;
    
    cout << (isEven(x) ? "false" : "true" )<< endl;
    
}

bool isEven(int a){
    return (a%2) ;
}
*/