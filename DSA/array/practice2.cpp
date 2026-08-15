#include <iostream>
#include<vector>
using namespace std;
    int largestElement(vector<int>& nums) {
        int i;
        int n=nums.size();
for( i =0; i<n-1;i++){
    if(nums[i]<nums[i+1]) 
    cout<<nums[i];
}
return nums[i];
}
int main() {
    vector<int>nums{3, 3, 0, 99, -40};
    largestElement(nums);
 
}