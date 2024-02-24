// Lab 2
// Exercise 2

#include <iostream>
#include <iomanip> // inputted for setprecision(2)
using namespace std;

int main() {
 
    double annual_salary; // defining our variable as a double due to the nature of salaries having decimal places
    double taxes; // defining our tax
    double net_salary; // defining out net_salary
    string children; // we want this be a yes or no answer.
    int children_amount; // we dont want decimals in our children_amount
    
    cout << fixed << setprecision(2); // allows us to have our answer with 2 decimal places
    cout << "Input your annual salary: " << endl; // input annual salary
    cin >> annual_salary;
    
    cout << "Do you have any children?: " << endl; // asking user to input whether they have children or not?
    cin >> children;
    
    if (children == "yes" or children == "Yes" or children == "Yes." or children == "Yes.") {// This will allow this if statement to run if the user inputs yes.
        cout << "How many children do you have?: " << endl;
        cin >> children_amount; // Amount of children will be inputted into the code.
        annual_salary -= ((children_amount * 0.05) * annual_salary); // We will then deduct 5% per child from the pre-tax salary.
        cout << "After a 5% deduction per child on your pre-taxed salary, your new adjusted taxable annual salary going forward is $" << annual_salary << endl; }
    
    taxes = 0;
    net_salary = 0;
    
    if (annual_salary < 12000 ) { // if else statements which follow the given tax rate on the lab
        taxes = annual_salary * 0.06; // updating our tax for the final print statement and ease of subtracting by annual salary
        net_salary = annual_salary - taxes; }
    else if (annual_salary >= 12000 and annual_salary < 38000) {
        taxes = annual_salary * 0.27;
        net_salary = annual_salary - taxes; }
    else if (annual_salary >= 38000 and annual_salary < 50000) {
        taxes = annual_salary * 0.33;
        net_salary = annual_salary - taxes; }
    else {
        taxes = annual_salary * 0.39;
        net_salary = annual_salary - taxes; }
    
    cout << "This year you paid $" << taxes << " in tax." << " So your net salary after taxes are taken out is $" << net_salary << "." << endl; // print statement using tax and net salary.
    
    return 0;
}
