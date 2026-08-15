#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drop = 0;

        // 🔍 STEP 1: Count how many times the array "drops"
        // A "drop" means nums[i] > nums[i+1]
        // In a sorted + rotated array, this can happen at MOST once.
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                drop++;
            }
        }

        //  If more than 1 drop → array is NOT sorted+rotated
        if (drop > 1) return false;

        // 🔍 STEP 2: If exactly 1 drop, check the rotation point
        // In a real rotated array, the last element should be
        // smaller than or equal to the first element.
        //
        // Example of valid rotation:
        // 3 4 5 | 1 2      (last=2 <= first=3)
        //
        // If last > first → it means the array is broken in a wrong place.
        if (drop == 1 && nums[n - 1] > nums[0]) return false;

        // ✔ If none of the above conditions failed, it's valid
        return true;
    }
};
int main() {
    Solution sol;

    // Example input
    vector<int> nums = {3, 4, 5, 1, 2};

    // Checking the array
    bool result = sol.check(nums);

    // Output result
    if (result)
        cout << "YES, the array is sorted and rotated.\n";
    else
        cout << "NO, the array is NOT sorted and rotated.\n";

    return 0;
}