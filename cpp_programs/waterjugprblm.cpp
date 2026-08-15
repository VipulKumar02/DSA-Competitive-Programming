#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jug4 = 0, jug3 = 0;   // Initial state: both jugs empty
    const int CAP4 = 4;       // Capacity of 4L jug
    const int CAP3 = 3;       // Capacity of 3L jug
    const int GOAL = 2;       // Target: 2 liters in 4L jug
    int step = 0;

    cout << "🔹 WATER JUG PROBLEM (4L & 3L)\n";
    cout << "Goal: Measure exactly " << GOAL << " liters of water\n\n";

    // Run until the goal is achieved
    while (jug4 != GOAL) {
        if (jug4 == 0) {
            // Fill 4L jug
            jug4 = CAP4;
            cout << "Step " << ++step << ": Fill the 4L jug -> (4L = " << jug4 << "L, 3L = " << jug3 << "L)\n";
        }
        else if (jug3 < CAP3) {
            // Pour from 4L jug to 3L jug
            int pour = min(jug4, CAP3 - jug3);
            jug4 -= pour;
            jug3 += pour;
            cout << "Step " << ++step << ": Pour from 4L into 3L -> (4L = " << jug4 << "L, 3L = " << jug3 << "L)\n";
        }
        else if (jug3 == CAP3) {
            // Empty 3L jug when full
            jug3 = 0;
            cout << "Step " << ++step << ": Empty the 3L jug -> (4L = " << jug4 << "L, 3L = " << jug3 << "L)\n";
        }
    }

    cout << "\n🎯 Goal achieved: 4L jug now contains exactly 2 liters!\n";
    return 0;
}
