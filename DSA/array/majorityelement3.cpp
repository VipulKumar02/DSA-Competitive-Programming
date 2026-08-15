#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find all elements that appear more than n/3 times
vector<int> majorityElement(vector<int> &A) {

    int n = A.size();
    vector<int> ans;  // to store final majority elements

    // If array is empty, return empty answer
    if(n == 0) return ans;

    // Step 1: Sort the array
    // This brings equal elements together
    sort(A.begin(), A.end());

    int freq = 1;  // frequency counter for current element

    // Step 2: Traverse array to count frequencies
    for(int i = 1; i < n; i++) {

        if(A[i] == A[i - 1]) {
            // Same element → increase count
            freq++;
        } else {
            // New element → check previous element's freq
            if(freq > n / 3)
                ans.push_back(A[i - 1]);

            // Reset frequency for new number
            freq = 1;
        }
    }

    // Step 3: After loop ends, check last element's frequency
    if(freq > n / 3)
        ans.push_back(A[n - 1]);

    // Step 4: Return the list of majority elements
    return ans;
}


int main() {

    vector<int> arr = {1, 2};

    // Store the result returned by function
    vector<int> result = majorityElement(arr);

    // Print the result
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}
