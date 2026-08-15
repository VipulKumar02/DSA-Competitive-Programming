#include <iostream>
#include <string>
using namespace std;

// Luhn algorithm function: assumes string has only digits
bool luhnCheck(const string &card) {
    int sum = 0;
    bool doubleDigit = false;

    // Traverse from right to left
    for (int i = card.size() - 1; i >= 0; --i) {
        int d = card[i] - '0';    // convert char to int

        if (doubleDigit) {
            d = d * 2;
            if (d > 9) d = d - 9; // same as adding digits (16 → 1+6 = 7)
        }

        sum += d;
        doubleDigit = !doubleDigit;   // alternate between true/false
    }

    return (sum % 10 == 0);
}

int main() {
    string card;
    cout << "Enter card number: ";
    getline(cin, card);   // takes input with spaces

    string clean = "";
    for (char c : card) {
        if (c == ' ' || c == '-') {
            // ignore spaces and hyphens
            continue;
        } else if (isdigit(c)) {
            // keep only digits
            clean += c;
        } else {
            // any other character = invalid input
            cout << "Invalid character in input. Use only digits, spaces, or -.\n";
            return 0;
        }
    }

    if (clean.empty()) {
        cout << "No number entered.\n";
        return 0;
    }

    if (luhnCheck(clean))
        cout << "Valid card number ✅\n";
    else
        cout << "Invalid card number ❌\n";

    return 0;
}
