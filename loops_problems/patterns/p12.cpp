// left half pyramid

#include <iostream>
using namespace std;

int main(){
    int rows;
    cin>>rows;

    for(int i = 0; i < rows; i++){
        for(int space = 0; space < rows-i-1; space++){
            cout<<"  ";
        }
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}