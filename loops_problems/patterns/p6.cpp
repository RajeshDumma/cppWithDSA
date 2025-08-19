#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows ;

  /*  for(int i = rows; i >= 1; i--){
        for(int j = 0; j < i; j++){
            cout<<i;
        }
        cout<<endl;
    } */

    // 2nd method

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows-i; j++){
            cout<<rows - i;
        }
        cout<<endl;
    }
    return 0;
}