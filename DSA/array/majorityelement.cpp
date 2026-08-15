   //Brute Force approach for calculating Majority element
   
   #include<iostream>
   using namespace std;
   #include<vector>
   
   int majorityElement(vector<int>& A) {
        int n = A.size();
        
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (A[j] == A[i])
                    count++;
            }
            if (count > n / 2)
                cout<<count;
                return A[i];
        }
        
        return -1; // unreachable if majority element is guaranteed
    }
    int main(){
        vector<int>nums={2,2,1,1,1,2,2};
        cout<<majorityElement(nums);
    }