// https://snakify.org/en/lessons/for_loop_range/problems/sum_of_cubes/

#include <iostream>
using namespace std;

int main(){
   
    int num;
    cin >> num;
    int cubeSum = 0;

    for(int i =1; i <= num; i++){
        cubeSum += i*i*i;
    }
    cout << cubeSum <<endl;
    return 0;
}