// Write a program to add "Mr. " before a given name (Example: "Ravi" → "Mr. Ravi").

#include <bits/stdc++.h>
using namespace std;

int main() {
	string name ;
	getline(cin , name);
	
	name = "Mr. " + name;
	cout << name << endl;
}
