// king moves

#include<iostream>
using namespace std;

int main(){

    int x1, y1, x2, y2;
    cout<<"Enter the values: "<<endl;
    cin>>x1 >> y1 >> x2 >> y2 ;

    int xdiff , ydiff;

    if(xdiff < 0) xdiff *= -1;
    if(ydiff < 0) ydiff *= -1;

    if(xdiff <= 1 && ydiff <= 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}