// Lab 3
// Exercise 4

#include <iostream>
using namespace std;

int main() {
 
    // Declaring variables
    int total_sum = 0;
    int odd_sum = 0;
    int even_sum = 0;
    int x = 0;
    
    // Write condition for while loop
    while (x <= 100) {
        
        total_sum += x;
        
        if (x % 2 == 0) // If x divided by 2 gives a remainder of 0 it is even
            even_sum += x; // Adding the current value of x to the even_sum variable
        else
            odd_sum += x; // Adding the current value of x to the odd_sum variable
        
        x += 1; // += means taking the variable and adding it with the number to update x
    }
    
    // Printing out results
    cout << "The total sum of all of the integers is " << total_sum << endl;
    cout << "The total sum of the even integers is " << even_sum << endl;
    cout << "The total sum of the odd integers is " << odd_sum << endl;
    
    return 0;
}
