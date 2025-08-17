// https://snakify.org/en/lessons/for_loop_range/problems/sum_of_factorials/

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    float fact = 1;
    int sum = 0;

    for(int i =1; i <= num; i++){
        long long fact =1;
        for(int j =1; j <= i; j++){
            fact *= j;
        }
        sum += fact;
    }    cout<< sum << endl;
    return 0;
}