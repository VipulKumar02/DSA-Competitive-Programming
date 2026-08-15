#include <iostream>
using namespace std;

int main() {
    char ch = 'X';
    int n = 5; 

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j < n; j++) {
            cout << " ";
        }

    
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << ch;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Characters
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << ch;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
