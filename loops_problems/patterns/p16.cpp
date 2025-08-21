/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;

int main(){

    int rows;
    cin>>rows;

    for(int i = 0 ; i < rows; i++){
        for(int space = 0; space < i ; space++){
            cout<<"  ";
        }
        for(int j = 0; j < 2*(rows-i)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}