#include <iostream>
using namespace std;

int main(){
    
    int rows;
    cin>>rows;

    for(int i = rows; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
}
        // second method
/*
        for(int i=0; i< rows; i++){
            for(int j =0 ; j < rows-1;j++){
                cout<<"*";
            }
            cout<<endl;
        } */
            
    return 0;
}
