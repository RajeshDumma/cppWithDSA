//Write a function maxOfTwo(int a, int b) that returns the maximum of two numbers.


#include <iostream>

using namespace std;

int maxOfTwo(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
    // return (a > b) ? a : b ;
    // return max(a, b);
}

int main(){
    
    int x, y;
    cout <<"Enter the values : "<<endl;
    cin >> x >> y;
    
    cout << maxOfTwo (x, y) <<endl;
    return 0;
}