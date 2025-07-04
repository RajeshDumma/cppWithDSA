Data types :-  Data can be stored in different types.
==> it can be a number , decimal numbers , binary numbers , boolean (True or False) , characters(1,2,3,1,a,b,c,d,&,$,@,!)
    strings (Combination of characters),


    Data types are Multiple kinds :-

    1) Primitive
    2) non primitive or user Derive
    3) Derived


    primitive data types :

    1) Integer (int) :- base 10 numbers (whole numbers) , 4 bytes ( 1 bytes = 8 bits)
    2) floating point numbers(float)  , 4 bytes
    3) Boolean (bool): true or false   , 1 bytes
    4) Character (char): '1','d','w','r' , 1 bytes
    5)String (string) : multiple characters :- "Rajesh","Hello","123" , 
    6)Long long integer (long long int): long integer , 8 bytes
    7) Double (double) : (Large floating point number) large decimal point , 8 bytes
    8) void or valueless (void)

    Variable :

    Named storage memory location,
    uesd to stored data access data sometime in future.


    Variables :
    1) creating a variable (declaring a variable).
    2) Assigning a value to the variable (Initialization / definition)

    syntax = datatype nameOfVariable;


    Variables are case sensetive for example (a,A , score , Score , scOre, overs , OveRs)

    type Safety :

    statically typed

    type conversition :-
    1) Implicit
    2) explicit

    uses:
    1) Type Safty
    2)Better performance

    cons:
    1) increase in  code complexity
    2) loos of presision
    3)maybe poor performance
    4) Can causes overfloe or underflow

    Macros:
macro is piece of code which can be assigned a value and this value can be used anywhere in the code , and upon the macro original code piece / snippet will be used.

Syntax : #define name code
ex:- #define printHello cout<<"Hii welcome"<<endl;

2) functional macro
#define print(x) cout<<x<<endl; 
it can work like , f(x) = x + x or x * x
ex:- #define print(z) cout<< z <<endl;
print("Welcome Programing world")

Type Range macros:
these ranges are included in limits.h.
we can include, #include<limits.h>
For float is included in , #included <float.h>.

but we have one option ti include all file in one file that is "bits/stdc++.h" file
#include <bits/stdc++.h>




    
