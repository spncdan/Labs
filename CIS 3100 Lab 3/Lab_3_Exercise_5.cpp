// Lab 3
// Exercise 5

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main() {
    
    int x=15,y=15; // Explorer's coordinates
    int x1,y1; // Treasure's coordinates
    char direction;
    float distance;
    bool treasure=false;
    int steps;
    
    srand(time(0)); // secretly seed the rand function
    x1=rand( ) % 30 + 1; // set X1 to random between 1 and 30
    y1=rand( ) % 30 + 1; // set X2 to random between 1 and 30
    
    // write loop to find the treasure

    steps = 0;
    
    while (treasure == false){ // We want our loop to keep running while treasure is equal to false but we can also break the loop using break statements if needed
        
        cout << "Please enter a direction (N, S, W, E), or X to exit the program: " << endl;
        cin >> direction; // Asking user to input either N, S, W, E
        
        if (direction == 'N'){ // Inputting if else statements based on exercise guidelines
            steps += 1;
            y += 1;
        }
        else if (direction == 'S'){
            steps += 1;
            y -= 1;
        }
        else if (direction == 'W'){
            steps += 1;
            x += 1;
        }
        else if (direction == 'E'){
            steps += 1;
            x -= 1;
        }
        else if (direction == 'X'){
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid response." << endl; // We want our loop to keep running in the case where a user may accidentally input a wrong character
        }
        
        distance = sqrt(static_cast<double>((x-x1)*(x-x1)+(y-y1)*(y-y1))); // Distance formula from lab guideline
        cout << "Your new coordinates are (" << x << "," << y << ") and your current distance from the treasure is " << distance << "." << endl; // Giving back coordinates and distance
        
        if (distance == 0){
            cout << "Congratulations! It took you " << steps << " steps to find the treasure." << endl; // Giving the user how many steps it took to reach treasure
            break;
        }
    }

    return 0;
}
