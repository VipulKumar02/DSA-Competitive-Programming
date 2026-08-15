#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "programming";

    int n = 5; // number of characters to remove
    for (int i = 0; i < n && !s1.empty(); i++) {
        s1.pop_back();
    }

    cout << "After removing " << n << " chars: " << s1 << endl;
    return 0;
}
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "programming";

    while (!s1.empty()) {
        s1.pop_back();
    }

    cout << "Final string: " << s1 << endl;  // prints empty string
    return 0;
}
*/
