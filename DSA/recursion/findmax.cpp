#include<bits/stdc++.h>
using namespace std;

int findmax(const vector<int>& arr, int maxi,int idx){
if(idx==arr.size())
return maxi;

if(arr[idx]>maxi){
    maxi = arr[idx];
}
return findmax(arr,maxi,idx+1);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin>>n;

    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int idx =0;
    int maxi = INT_MIN;
    maxi = findmax(arr,maxi,idx);
    cout<<maxi;
}
/*"But I'm not modifying it."
Exactly. If you're only reading it, the best practice is actually:
const vector<int>& arr
The const means:
"This function promises not to modify the vector."

Now the compiler will prevent accidental changes like:
arr[0] = 100;   // ❌ Error*/