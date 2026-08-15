#include <iostream>
using namespace std;

int main() {
    int year;

    // Ask the user to enter a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // If it is divisible by 4, now check if it is also divisible by 100
        if (year % 100 == 0) {
            // If it is divisible by 100, it must also be divisible by 400 to be a leap year
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            // If it's not divisible by 100, but divisible by 4, it's a leap year
            cout << year << " is a leap year." << endl;
        }
    } else {
        // If not divisible by 4, it's not a leap year
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
