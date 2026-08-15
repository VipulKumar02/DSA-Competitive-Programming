#include <iostream>
#include <vector> /* vector in C++
A vector is like a dynamic array — it can grow and shrink as needed.
It’s part of the Standard Template Library (STL).
 Why use vector?
To store a list of items (like numbers, strings, or even triplets)
Automatically manages memory (you don't need to manually resize it)*/
#include <tuple> /* A tuple lets you group different (or same) types together.
Think of it as a fixed-size container of different values.
 Why use tuple?
To store related values together — e.g., a triplet (a, b, c)
Better than struct when you don’t need custom names for each value
*/

using namespace std;

int main() {
    int product = 72;

    cout << "Triplets (a, b, c) such that a * b * c = 72:\n";

    for (int a = 1; a <= product; ++a) {
        for (int b = a; b <= product / a; ++b) {
            if ((product % (a * b)) == 0) {
                int c = product / (a * b);
                if (b <= c) {
                    cout << "(" << a << ", " << b << ", " << c << ") -> sum = " << (a + b + c) << "\n";
                }
            }
        }
    }

    return 0;
}
