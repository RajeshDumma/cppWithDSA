// https://snakify.org/en/lessons/for_loop_range/problems/ladder/

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i =1; i <= num ; i++){
        for(int j = 1; j <= i; j++){
            cout<< j ;
        }
        cout<<"\n";
    }
    return 0;
}