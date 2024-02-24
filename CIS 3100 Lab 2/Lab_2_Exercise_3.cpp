// Lab 2
// Exercise 3
// Sources used = asciitable.com for testing code output for correction

#include <iostream>
using namespace std;

int main() {
    
    char var1, var2, var3; // We start off by defining our inputted var as characters
    char first, second, third; // we also want to define our first, second, third variables as char since they'll essentially be our inputted variables assigned to it depending on their place in the ascii order.
    
    cout << "Please enter the first character: " << endl;
    cin >> var1; // first character input for var1
    
    cout << "Please enter the second character: " << endl;
    cin >> var2; // second character input for var2
    
    cout << "Please enter the third character: " << endl;
    cin >> var3; // third characteri input for var3
    
    if (var1 <= var2 and var1 <= var3) { // This is our first part of the if else statement and this specifically will find if var1 is less than or equal to both var2 and var3, if so we know that var1 is the lowest and therefore will be assigned to the "first" variable.
        first = var1;
        if (var2 <= var3) { // Now that we know our first, we will now begin to find our what our second and third will be in the ascending order by putting up the two remaining inputted numbers against one another with whether var2 is less than or equal to var3, if so we know that var2 will be our second.
            second = var2;
            third = var3;
        } else { // This else will be tied to the previous if statement and simply be the case if var2 is greater than var3
            second = var3;
            third = var2;
        }
    }
    else if (var2 <= var1 and var2 <= var3) { // This statement and below are simply a repeat of the code above with changes to the main variable being tested being var2 instead of var1.
        first = var2;
        if (var1 <= var3) {  // This statement is identical to the one above with it being var1 and var3 instead.
            second = var1;
            third = var3;
        } else {
            second = var3;
            third = var1;
        }
    }
    else { // If the if and else if statements above are not true, then we know that var3 <= var2 and var3 = var1.
        first = var3;
        if (var1 <= var2) {  // This statement is identical to the one above with it being var1 and var2 instead.
            second = var1;
            third = var2;
        } else {
            second = var2;
            third = var1;
        }
    }

    cout << "The first character will be " << first << ". " << "The second character will be " << second << ". " << "The third character will be " << third << "." << endl; // Finally we print out our final values here.

    return 0;
}


