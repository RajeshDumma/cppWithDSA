#include<iostream>
using namespace std;

int main(){

    int n , m ;
    cin>> n >> m;
    if(n%2 == 0 || m%2 == 0){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    // or

    cout<<((n*m)%2 == 0 ? "YES":"NO");

    return 0;
}