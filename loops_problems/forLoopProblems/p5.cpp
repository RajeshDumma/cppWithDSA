// https://snakify.org/en/lessons/for_loop_range/problems/how_many_zeroes/

#include<iostream>
using namespace std;

int main(){

     int num;
     cin >> num;
     int zeroCount = 0;
     for(int i = 1; i <= num ; i++){
        int n;
        cin >> n;
        if(n == 0)
        zeroCount++;
     }
     cout << zeroCount << endl;
    return 0;
}