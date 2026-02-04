// simple menu-driven application using switch statement
#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        // Display menu
        cout << "Menu:\n"; // Discuss: Do we need to declare a string variable for this?
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Option 3\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle menu choice
        switch (choice) {
            case 1:
                cout << "You selected Option 1.\n";
                break;  // Discuss: What does break do here?
            case 2:
                cout << "You selected Option 2.\n";
                break;
            case 3:
                cout << "You selected Option 3.\n";
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}