#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0) {
        cout << "Sum is not defined for negative numbers.";
    } else {
        int sum = n * (n + 1) / 2;
        cout << "Sum of first " << n << " natural numbers is: " << sum;
    }

    return 0;
}
