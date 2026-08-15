#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);
    return 0;
}
/*
Iterative (Efficient) Approach

Recursion works but is slow for large n. You can use a loop instead:


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);
    return 0;
}
*/