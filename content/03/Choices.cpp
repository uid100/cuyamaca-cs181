// modify the simple menu-driven application to use string inputs
#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    while (true) {
        // Display menu
        cout << "Menu:\n"; // Discuss: Do we need to declare a string variable for this?
        cout << "\t(A)pples\n";
        cout << "\t(B)ananas\n";
        cout << "\t(C)herries\n";
        cout << "\t(Q) Quit\n";
        cout << "Enter your choice: ";
        cin >> userInput;

        // Handle menu choice
        switch ( toupper(userInput[0]) ) { // Use first character of input
            case 'A':
                cout << "You selected Apples.\n";
                break;
            case 'B':
                cout << "This is Bananas!\n";
                break;
            case 'C':
                cout << "Cherries it is.\n";
                break;
            case 'Q':
            case 'X':  // Added 'X' as an alternative quit option
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}