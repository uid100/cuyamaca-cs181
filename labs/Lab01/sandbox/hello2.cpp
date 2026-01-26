#include <iostream>

using namespace std;

int main() {
    string userName;

    cout << "Hello!" << endl;
    cout << "What's your name? ";
    cin >> userName;
    cout << "Hello, " << userName << '.' << endl;
    cout << "\tIs it ok if I call you " << userName << '?' << endl;

    return 0;
}
