// Swap X and Y by using pass by value

#include <iostream>
using namespace std;

void swap(int a, int b) {   // pass by value (copies)
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap: X = " << a << ", Y = " << b << endl;
}

int main() {
    int X, Y;
    cout << "Enter the value of X and Y = ";
    cin >> X >> Y;

    swap(X, Y);   // only swaps the copies
    cout << "After swap in main: X = " << X << ", Y = " << Y;
}
 
// Note: If we use pass by value, the swap will not work as expected
