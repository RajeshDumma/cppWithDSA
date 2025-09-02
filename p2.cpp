// Write a program to append one string to another (Example: "Hello" and "World" → "HelloWorld").

#include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "Hello";
	string str2 = "World";
	
	cout<< str.append(str2) <<endl;
}

// Given a string "apple", print the third character using .at().

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "apple";
	cout<< str.at(3) <<endl;
}

// Write a program to add 's' at the end of "book" (so it becomes "books").

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "book";
	str.push_back('s');
	cout<<  str <<endl;
}

// Delete the last character from the string "coding".

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "coding";
	str.pop_back();
	cout<<  str <<endl;
}


// Replace the last character of "India" with 'n' (output: "Indian").

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "India";
	str.back() = 'n';
	cout<<  str <<endl;
}

// Insert 'X' at index 3 of "computer" (output: "comXputer").

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "computer";
	str.insert(3,1,'X');
	cout<<  str <<endl;
}

// Remove the first 3 characters from "elephant" (output: "phant").

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "elephant";
	str.erase(0,3);
	cout<<  str <<endl;
}

// Write a program to check if a string is empty.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "elephant";
  cout <<	(str.empty() ? "yes , empty" : "No, not empty" ) << endl;
//	cout<<  str <<endl;
}


// Take input from the user and print the string in reverse order (without using algorithm library).

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "library";
	string reverseStr = "";
	
	for(int i = 0; i < str.length(); i++){
	    reverseStr = str[i] + reverseStr;
	}
	cout<< reverseStr <<endl;
}
