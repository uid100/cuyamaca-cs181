#include <iostream>
using namespace std;

// Function prototypes
int totalMarks(int a, int b, int c);
double calculatePercentage(int total);
void displayMessage();

int main() {
    displayMessage();

    int total = totalMarks(80, 75, 90);
    double percent = calculatePercentage(total);

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percent << "%" << endl;

    return 0;
}

// Returns integer
int totalMarks(int a, int b, int c) {
    return a + b + c;
}

// Returns double
double calculatePercentage(int total) {
    return total / 3.0;
}

// Returns void
void displayMessage() {
    cout << "Student Grade Calculator" << endl;
}
