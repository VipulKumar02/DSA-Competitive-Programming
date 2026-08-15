//using moore's voting algo

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> &A) {

    int n = A.size();
    int freq=0;int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){ // here we make A[i] to ans if freq is 0
            ans=A[i];
        }
        if(ans==A[i]){   // ans==A[i] means same element comes in array freq++
            freq++;      // here else if conditionis not used if condition used
        }
        else{
            freq--;    // if diff element then freq--
        }
       
    }

   return ans;
}
int main(){
   vector<int>arr={3,2,3};
   cout<<majorityElement(arr);
}