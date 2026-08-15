#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x :" << endl;
    cin >> x;

    if (x > 0) {
        cout << "x is positive" << endl;
    } else if (x < 0) {
        cout << "x is negative" << endl;
    } else {
        cout << "x is zero" << endl;
    }
}