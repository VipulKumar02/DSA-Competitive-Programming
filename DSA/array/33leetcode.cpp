#include<iostream>
#include<vector>
using namespace std;
 int search(vector<int>& nums, int target){
    int drop;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>nums[i+1]){
            drop=nums[i+1];
        }
        if(nums)
    }
 }
int main() {
    vector<int>nums={4,5,6,7,0,1,2,3};
    int target;
    cout<<"enter target";
    cin>>target;
    search(nums,target);
}