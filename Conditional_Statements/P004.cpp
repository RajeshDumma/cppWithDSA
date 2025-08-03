#include<iostream>
using namespace std;

int main(){

    int x1, y1, x2, y2;
    cout<<"Enter the values: "<<endl;
    cin>>x1 >> y1 >> x2 >> y2;

    if(x1 == x2 || y1 == y2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}