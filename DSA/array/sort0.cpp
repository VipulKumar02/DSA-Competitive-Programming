#include<iostream>
#include<vector>
using namespace std;       
       /* int n=A.size();
        int i=0,j=0,temp;
        while(j<n){
           if(A[j]==0){
            j++;
           }
           else if(A[j]!=0){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i++;
            j++;
           }
           else {
            i++;
           }
        }
       */
    void moveZeroes(vector<int>& A) {
        int n = A.size();
        int i = 0;     // slow pointer (position for next non-zero)
        int j = 0;     // fast pointer  (scans the array)

        while (j < n) {
            if (A[j] != 0) {
                swap(A[i], A[j]);
                i++;
            }
            j++;
        }
    }


    int main(){
        vector<int>nums={0, 1, 0, 3, 12};
       moveZeroes(nums);

    }