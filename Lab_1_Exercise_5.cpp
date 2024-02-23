// Lab 1
// Exercise 5

#include <iostream>
using namespace std;

int main() {
    
    // Defining our variables as strings
    
    string noun;
    string plural_noun;
    string verb;
    string ing_verb;
    string adjective;
    string number;
    
    // Allowing user to input their values for our variables
    
    cout << "Enter any Noun (person, place, or thing):" << endl;
    cin >> noun;
    
    cout << "Enter any Plural Noun (more than one):" << endl;
    cin >> plural_noun;
    
    cout << "Enter any Verb (action):" << endl;
    cin >> verb;
    
    cout << "Enter any Verb ending in 'ing':" << endl;
    cin >> ing_verb;
    
    cout << "Enter any Adjective (description of noun):" << endl;
    cin >> adjective;
    
    cout << "Enter any Number:" << endl;
    cin >> number;
    
    // This is the program which will integrate the user's inputs into the story
    
    cout << noun << " had to go shopping because they had lost it's " << plural_noun << "." << endl;
    cout << "Therefore, " << noun << " started to " << verb << " to the store by " << ing_verb << "." << endl;
    cout << "Finally, when " << noun << " arrived at the store they found it was closed." << endl;
    cout << noun << " then had to " << verb << " back to their " << adjective << " home." << endl;
    cout << noun << " saw " << number << " " << adjective << " " << plural_noun << " and lived happily ever after." << endl;
    
    return 0;
    
}


