// Lab 3
// Exercise 1

#include<iostream>
using namespace std;

int main() {
    
    int num1; // Having our variable which will be inputted defined as an integer
    
    cout << "Please enter a number: " << endl;
    cin >> num1; // allows user to input value for variable
    
    while (num1 > 0) { // we want our loop to stop when num1 is 0.
        cout << "It is now " << --num1 << "." << endl; // --num1 is a pre decrementing process which will subtract 1 from num1 until that value reaches 0
    }

    return 0;
}
