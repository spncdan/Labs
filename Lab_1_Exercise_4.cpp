// Lab 1
// Exercise 4

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // declaring variable types
 
    double shares;
    double price_before;
    double price_after;
    double profit;
    
    // inputs are asked of the user to fill in variables 
    
    cout << fixed << setprecision(2);
    cout << "How many shares did you purchase?" << endl;
    cin >> shares;
    
    cout << "What was the price of your stocks when you bought them?" << endl;
    cin >> price_before;
    
    cout << "What is the price of your stocks now?" << endl;
    cin >> price_after;
    
    profit = (shares * price_after) - (shares * price_before);
    
    // final calculations of profit being relayed back to the user in the terminal
    
    cout << "You have made a profit of $" << profit << " since you bought " << shares << " shares of this stock." << endl;
    
    return 0;
}

