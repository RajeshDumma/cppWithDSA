#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your agr: "<<endl;
    cin>>age;

  //  bool isEligibleToVote;
   // isEligibleToVote = (age >= 18)? true : false;

     string isEligibleToVote;
     string isTeenager;
     isEligibleToVote = (age >= 18)? "you are eligible to vote" : "you are not eligible to vote";
     isTeenager =((age >= 13)&&(age < 18))? "you are a teenager":"you not a teenager";

    cout<<isEligibleToVote<<endl;
    cout<<isTeenager<<endl;

    return 0;
}