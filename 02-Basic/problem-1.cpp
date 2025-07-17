#include <bits/stdc++.h>
//#include <iomanip>  // For setprecision

using namespace std;

int main() {
    float principal_amount, interest_rate, years;

    cout << "Enter the principal amount: " << endl;
    cin >> principal_amount;

    cout << "Enter the annual interest rate: " << endl;
    cin >> interest_rate;

    cout << "Enter the time period in years: " << endl;
    cin >> years;

    float interest = (principal_amount * interest_rate * years) / 100.0;

   // cout << fixed << ;
    cout << "Mia will earn $" <<fixed<<setprecision(2) << interest << " in interest." << endl;

    return 0;
}
