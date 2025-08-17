// https://snakify.org/en/lessons/for_loop_range/problems/factorial/

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    float fact = 1;

    for(int i=num; i >= 1; i--){
        fact *= i;
    }
    cout<< fact << endl;
    return 0;
}