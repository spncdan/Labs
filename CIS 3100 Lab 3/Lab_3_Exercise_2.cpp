// Lab 3
// Exercise 2

#include<iostream>
using namespace std;

int main() {
    
    int wage; // defining our variables as integers
    int days;
    
    wage = 2; // starting off with 2 dollar wage on first day
    days = 1; // we want our days to be add up to 20 before ending the while loop
    
    while (days < 20) {
        wage *= 2; // multiplies the wage by 2 each loop
        days += 1; // adds 1 to days after each loop
    }
    
    cout << "The total amount that the employee makes is $" << wage << endl;

    return 0;
}

