 // Lab 1
// Exercise 3

#include <iostream>
using namespace std;

int main() {
    
    // Creating empty variables and specifying that they are doubles
    
    // I went with doubles in case we get averages with decimals
    
    double num1;
    double num2;
    double num3;
    double num4;
    double avg;
    
    // Letting user input a number for variables (num1 - num4)
    
    cout << "Enter the first number: " << endl;
    cin >> num1;
    
    cout << "Enter the second number: " << endl;
    cin >> num2;
    
    cout << "Enter the third number: " << endl;
    cin >> num3;
    
    cout << "Enter the fourth number: " << endl;
    cin >> num4;
    
    // Defining our avg variable which was specified as a double earlier in the code
    
    avg = (num1+num2+num3+num4)/4;
    
    cout << "The average of these numbers is: " << avg << endl;
    
    return 0;
}
