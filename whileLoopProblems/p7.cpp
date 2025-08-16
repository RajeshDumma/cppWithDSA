// https://snakify.org/en/lessons/while_loop/problems/seq_avg/

#include <iostream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    while(true){
        int n;
        cin >> n;
        if(n != 0){
            sum += n;
            count++;
        } else {
            break;
        }
    }
    if(count > 0){
        float average = sum / (float) count;
        cout <<fixed<< setprecision(1) << average << endl;
    }
    return 0;
}
