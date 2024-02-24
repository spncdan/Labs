// Lab 3
// Exercise 6

#include<iostream>
using namespace std;

int main() {
    
    char option; // Option variable defined as a character and will be what the user chooses in our if else statement below
    bool keep_going; // Keep_Going will be our boolean value which will either be true or false
    keep_going = true;
    
    while (keep_going == true){ // We will create a while loop where the menu and games will keep repeating if keep_going = true
    
    cout << "************************************************* \n";
    cout << " \n";
    cout << "                    Welcome! \n";
    cout << " \n";
    cout << "Please choose a number from the following options: \n";
    cout << " \n";
    cout << "1. Play 'Choose Your Own Adventure!' \n";
    cout << "2. Play 'Madlib' \n";
    cout << "3. Exit \n";
    cout << " \n";
    cout << "************************************************* \n";
    
    cout << " " << endl;
    cout << "Please Choose either 1, 2, or 3 in accordance with the menu above." << endl;
    cin >> option; // user's input becomes option variable
  
        if (option == '1') { // Repeat of code from previous Lab
            
            cout << "Now loading 'Choose Your Own Adventure'... Please Standby" << endl;
            
            char decision1;
            char decision2;
            char decision3;
            char decision4;
            
            cout << "You wake up at 6:00 AM in the morning to your alarm, you have an environmental science class at 7:00 AM. After getting ready and leaving your house, you have the option to either take the bus or walk to college." << endl;
            cout << "Type 'A' if you choose to take the bus: " << endl;
            cout << "type 'B' if you choose to walk: " << endl;
            cin >> decision1;
            
            if (decision1 == 'A') {
                cout << "You end up choosing to take the bus, however due to delays you find that you've been waiting for 20 minutes at the bus stop and the time is now 6:20 AM." << endl;
                cout << "You have the option to stay and wait at the bus stop in the hope that a bus will come in the next 5 minutes or you can just walk to college from the bus stop" << endl;
                cout << "Type 'A' if you choose to stay and wait for the bus to come: " << endl;
                cout << "Type 'B' if you choose to just walk to college from the bus stop: " << endl;
                cin >> decision4;
                if (decision4 == 'A') {
                    cout << "You choose to stay and wait for the bus to come, however the bus still does not come for another 20 minutes." << endl;
                    cout << "It finally arrives at 6:40 AM and takes around 10 minutes to get you to college, in which you arrive at 6:50 AM" << endl;
                    cout << "In class you're called on to answer what percentage of the ocean floor is mapped, which the professor emphasizes was in the textbook chapter you were to read for that week." << endl;
                    cout << "Type 'A' if you choose to answer with 99%: " << endl;
                    cout << "Type 'B' if you choose to answer with 95%: " << endl;
                    cout << "Type 'C' if you choose to answer with 90%: " << endl;
                    cin >> decision3;
                    if (decision3 == 'A') {
                        cout << "You answer with 99% as you had read in the textbook before class, and the professor applaudes you for your answer." << endl;
                    }
                    else if (decision3 == 'B') {
                        cout << "You answer with 95%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else if (decision3 == 'C') {
                        cout << "You answer with 90%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else {
                        cout << "The option you entered is invalid, please restart the program and try again by typing option 'A', 'B', or 'C'." << endl;
                    }
                    
                }
                else if (decision4 == 'B') {
                    cout << "You choose to just walk to college from the bus stop outside your home after intially waiting 20 minutes, which let's you arrive at college around 6:50 AM with a 20 minute walk." << endl;
                    cout << "In class you're called on to answer what percentage of the ocean floor is mapped, which the professor emphasizes was in the textbook chapter you were to read for that week." << endl;
                    cout << "Type 'A' if you choose to answer with 99%: " << endl;
                    cout << "Type 'B' if you choose to answer with 95%: " << endl;
                    cout << "Type 'C' if you choose to answer with 90%: " << endl;
                    cin >> decision3;
                    if (decision3 == 'A') {
                        cout << "You answer with 99% as you had read in the textbook before class, and the professor applaudes you for your answer." << endl;
                    }
                    else if (decision3 == 'B') {
                        cout << "You answer with 95%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else if (decision3 == 'C') {
                        cout << "You answer with 90%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else {
                        cout << "The option you entered is invalid, please restart the program and try again by typing option 'A', 'B', or 'C'." << endl;
                    }
                }
            }
            
            else if (decision1 == 'B') {
                cout << "You end up walking and arrive at your college in about 25 minutes where the time is now 6:25 AM." << endl;
                cout << "Now that you've arrived at college at 6:25 AM, you have 25 minutes to spare." << endl;
                cout << "Since you've gotten to college early, you've decided you can either read the textbook you brought with you or watch funny videos on youtube on your phone." << endl;
                cout << "Type 'A' if you choose to read the textbook: " << endl;
                cout << "Type 'B' if you choose to watch funny videos youtube: " << endl;
                cin >> decision2;
                
                if (decision2 == 'A') {
                    cout << "While reading your textbook, you gain some useful knowledge about the class regarding the fact that 99% of the ocean floor is unmapped, then you head to class." << endl;
                    cout << "In class you're called on to answer what percentage of the ocean floor is mapped, which the professor emphasizes was in the textbook chapter you were to read for that week." << endl;
                    cout << "Type 'A' if you choose to answer with 99%: " << endl;
                    cout << "Type 'B' if you choose to answer with 95%: " << endl;
                    cout << "Type 'C' if you choose to answer with 90%: " << endl;
                    cin >> decision3;
                    
                    if (decision3 == 'A') {
                        cout << "You answer with 99% as you had read in the textbook before class, and the professor applaudes you for your answer." << endl;
                    }
                    else if (decision3 == 'B') {
                        cout << "You answer with 95%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else if (decision3 == 'C') {
                        cout << "You answer with 90%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else {
                        cout << "The option you entered is invalid, please restart the program and try again by typing option 'A', 'B', or 'C'." << endl;
                    }
                }
                
                else if (decision2 == 'B') {
                    cout << "You end up watching funny youtube videos before heading into class" << endl;
                    cout << "In class you're called on to answer what percentage of the ocean floor is mapped, which the professor emphasizes was in the textbook chapter you were to read for that week." << endl;
                    cout << "Type 'A' if you choose to answer with 99%: " << endl;
                    cout << "Type 'B' if you choose to answer with 95%: " << endl;
                    cout << "Type 'C' if you choose to answer with 90%: " << endl;
                    cin >> decision3;
                    
                    if (decision3 == 'A') {
                        cout << "You answer with 99%, and the professor applaudes you for your answer." << endl;
                    }
                    else if (decision3 == 'B') {
                        cout << "You answer with 95%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else if (decision3 == 'C') {
                        cout << "You answer with 90%, and the professor responds by explaining that your answer was incorrect and that the answer was actually 99%." << endl;
                    }
                    else {
                        cout << "The option you entered is invalid, please restart the program and try again by typing option 'A', 'B', or 'C'." << endl;
                    }
                }
                
                else {
                    cout << "The option you entered is invalid, please restart the program and try again by typing option 'A' or 'B'." << endl;
                }
            }
            else {
                cout << "The option you entered is invalid, please restart the program and try again by typing option 'A' or 'B'." << endl;
            }
        }
        
        else if (option == '2') { // Repeat of code from Week 1's Lab
            
            cout << "Now loading 'Madlib'... Please Standby" << endl;
            
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
        }
        
        else if (option == '3') { // If user chooses 3 the program will stop.
            cout << "Exiting the program... Thanks for playing!" << endl;
            keep_going = false; // calling upon 3 will change keep_going to false and thus stop the loop without us needing to entirely break the loop.
        }
        else {
            cout << "Invalid response. Please try again..." << endl;
        }
        cout << " " << endl; // Added a space here so when the loop does repeat there will be a little space between the top of the menu and the previous game's outputs
    }
    
    return 0;
}
