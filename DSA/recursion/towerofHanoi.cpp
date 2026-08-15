#include <iostream>   // for input-output operations
using namespace std;

// Function to perform Tower of Hanoi moves
void TOH(int n, int A, int B, int C) {
    // n -> number of disks
    // A -> source rod
    // B -> auxiliary rod
    // C -> destination rod

    if (n > 0) {  // Base condition: if there is at least one disk to move
        // Step 1: Move (n-1) disks from source (A) to auxiliary (B) using destination (C)
        TOH(n - 1, A, C, B);

        // Step 2: Move the remaining largest disk directly from source (A) to destination (C)
        cout << "(" << A << ", " << C << ")\n";

        // Step 3: Move (n-1) disks from auxiliary (B) to destination (C) using source (A)
        TOH(n - 1, B, A, C);
    }
}

int main() {
    // Calling the Tower of Hanoi function with 4 disks
    // Rod 1 = Source, Rod 2 = Auxiliary, Rod 3 = Destination
    TOH(4, 1, 2, 3);

    return 0;
}
