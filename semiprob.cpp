// This program demonstrates a compile error.
// Sarah Bender
#include <iostream>
using namespace std;
int main() {
int number;
float total;
cout << "Today is a great day for Lab" ;
cout << endl << "Let's start off by typing a number of your choice" << endl;
cin >> number;
total = number * 2;
cout << total << " is twice the number you typed" << endl;
return 0;
}

//Re-compile the program and when you have no syntax errors, run the program and input 9 when asked. Record the output.
//18 is twice the number you typed

//Try running it with different numbers. Record your output.
// I tried running it with the number 4. It gave me "8 is twice the number you typed."

//Do you feel you are getting valid output?
//Yes.
