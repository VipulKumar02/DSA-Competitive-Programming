#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'V';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print character at borders
            if (i == 1 || i == n || j == 1 || j == n)
                cout << ch << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
