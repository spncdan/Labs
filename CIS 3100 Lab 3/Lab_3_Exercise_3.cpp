// Lab 3
// Exercise 3

#include<iostream>
using namespace std;

int main() {
    
    int debt, annual_rate, monthly_rate, paid, months; // Defining all of our variables as integers
    
    cout << "How much is currently owed in student loan debt?: " << endl;
    cin >> debt; // Asks user to input their debt amount.
    
    cout << "What is the annual interest rate being charged?: " << endl;
    cin >> annual_rate; // Asks user to input their annual interest rate on their debt.
    
    cout << "How much do you plan to pay each month towards your debt?: " << endl;
    cin >> paid; // Asks user how much they will pay towards their debt.
    
    monthly_rate = annual_rate/12;
    months = 0;

    while (debt > 0) {
        months += 1;
        debt += debt*monthly_rate;
        debt = debt - paid;
    }
    
    cout << "It will take " << months << " months to pay off your student loan debt." << endl;
    
    return 0;
}
