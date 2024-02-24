// Lab 2
// Exercise 4

#include <iostream>
using namespace std;

int main() {
    
    // Defining all of our variables as characters
    char decision1;
    char decision2;
    char decision3;
    char decision4;
    
    // Beginning of story
    cout << "You wake up at 6:00 AM in the morning to your alarm, you have an environmental science class at 7:00 AM. After getting ready and leaving your house, you have the option to either take the bus or walk to college." << endl;
    cout << "Type 'A' if you choose to take the bus: " << endl;
    cout << "type 'B' if you choose to walk: " << endl;
    cin >> decision1; // Asking user to input either A or B
    
    if (decision1 == 'A') { // If user inputs B
        cout << "You end up choosing to take the bus, however due to delays you find that you've been waiting for 20 minutes at the bus stop and the time is now 6:20 AM." << endl;
        cout << "You have the option to stay and wait at the bus stop in the hope that a bus will come in the next 5 minutes or you can just walk to college from the bus stop" << endl;
        cout << "Type 'A' if you choose to stay and wait for the bus to come: " << endl;
        cout << "Type 'B' if you choose to just walk to college from the bus stop: " << endl;
        cin >> decision4;
        if (decision4 == 'A') { // Nested if else within decision1's A input
            cout << "You choose to stay and wait for the bus to come, however the bus still does not come for another 20 minutes." << endl;
            cout << "It finally arrives at 6:40 AM and takes around 10 minutes to get you to college, in which you arrive at 6:50 AM" << endl;
            cout << "In class you're called on to answer what percentage of the ocean floor is mapped, which the professor emphasizes was in the textbook chapter you were to read for that week." << endl;
            cout << "Type 'A' if you choose to answer with 99%: " << endl;
            cout << "Type 'B' if you choose to answer with 95%: " << endl;
            cout << "Type 'C' if you choose to answer with 90%: " << endl;
            cin >> decision3;
            if (decision3 == 'A') { // Nested if else withint decision3's A input
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
    
    else if (decision1 == 'B') { // If user chooses B for decision 1
        cout << "You end up walking and arrive at your college in about 25 minutes where the time is now 6:25 AM." << endl;
        cout << "Now that you've arrived at college at 6:25 AM, you have 25 minutes to spare." << endl;
        cout << "Since you've gotten to college early, you've decided you can either read the textbook you brought with you or watch funny videos on youtube on your phone." << endl;
        cout << "Type 'A' if you choose to read the textbook: " << endl;
        cout << "Type 'B' if you choose to watch funny videos youtube: " << endl;
        cin >> decision2;
        
        if (decision2 == 'A') { // Nested if else within decision1's B input
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
        
    else { // Putting an else here in case user inputs something that is not A or B for decision1
            cout << "The option you entered is invalid, please restart the program and try again by typing option 'A' or 'B'." << endl;
        }
        
        return 0;
    }
    
}
