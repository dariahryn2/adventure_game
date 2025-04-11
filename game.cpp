#include <iostream>
#include <string>

using namespace std;
//

// declaraties van functies
void followMap();
void river();
void tunnel();
void startGame();
void again();

int main() {
    cout << "=== The Forest ===\n";
    startGame();
    again();
    return 0;
}

//functies inhoud
void startGame() {

    cout << "You are standing in a middle of a forest. The path you were following suddenly ends.\n";
    cout << "But then you see a map laying on the ground and pick it up. There's an X written on it.\n";
    cout << "1. Follow the map\n";
    cout << "2. Try to go back\n";
    cout << "Choose your path (1 or 2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        followMap();
    } else if (choice == 2) {
        cout << "\nYou walk in circles and end up back where you started.\n";
        startGame();
    } else {
        cout << "Invalid choice. The forest swallows you whole. Game over.\n";
    }
}

void followMap() {
    cout << "\nYou follow the map's trail and find a fork in the path.\n";
    cout << "1. Go left toward the sound of rushing water\n";
    cout << "2. Go right into a dark tunnel\n";
    cout << "Choose your path (1 or 2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        river();
    } else if (choice == 2) {
        tunnel();
    } else {
        cout << "You hesitate too long and vanish into the mist. Game over.\n";
    }

}void river() {
    cout << "\nYou carefully cross the rope bridge...\n";
    cout << "On the other side, a glowing gate opens.\n";
    cout << "You step through and see a room full of tresures.\n";
    cout << "GOOD ENDING\n";
}

void tunnel() {
    cout << "\nYou enter the dark tunnel...\n";
    cout << "Strange creatures surround you.\n";
    cout << "Your flashlight dies. Darkness consumes you.\n";
    cout << "BAD ENDING\n";
}

//opnieuw spelen
void again(){
    cout << "Play again?\n";
    cout << "Yes(1) No(2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        main();
    } else if (choice == 2) {
        exit(0);
    }

}