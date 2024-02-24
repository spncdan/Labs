// Lab 2
// Exercise 1

#include<iostream>
using namespace std;

int main() {
 
    int temperature; // defining temperature as an integer
    string keep_going; // defining keep_going as a string

    keep_going = "yes"; // I chose to add this so I didn't have to call the function over and over for the test inputs

    while (keep_going == "yes") { // while the keep_going variable equals "yes" the function will continue to loop
        
        cout << "Enter the temperature today: " << endl;
        cin >> temperature; // User inputs the temperature
        
        if (temperature > 80) // if else statements will decide depending on what the temperature is what strings will run
            cout << "It is very hot today!" << endl;
        else if (temperature < 40)
            cout << "It is very cold today!" << endl;
        else
            cout << "It is a beautiful day today!" << endl;
        
        cout << "Would you like to enter another temperature?: " << endl; // This will ensure the loop continues to run if the user wants it too
        cin >> keep_going;
        
        if (keep_going == "no")
            break; // if the user inputs no, the while loop will break
    }

    return 0;
}

