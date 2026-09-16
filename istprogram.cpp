// Write a complete C++ program that does the following:

// Prompts the user to enter their first name using cout.

// Takes their name as input using cin.

// Prompts the user to enter their favorite number.

// Takes that number as input using cin.

// Prints a final friendly message back to them combining both pieces of information (e.g., "Hello [Name]! [Number] is a fantastic number!").


// program:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    double x;
    cout << "Enter the First Name : ";
    getline(cin,s);
    cout << "Enter your favorite No.";
    if(!(cin >>x)){
        cerr<<"please enter a valid number" <<endl;
        return 1;
    }
    cout << "Hello " <<s << "! " <<endl <<x <<" is a fantastic number!";
    return 0;
}