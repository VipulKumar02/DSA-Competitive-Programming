#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'X';

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print characters and spaces inside
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << ch;
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
