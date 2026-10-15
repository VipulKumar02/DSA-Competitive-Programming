#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        int size =0;
        int i =0; int j =arr.length()-1;
        while(i<=j){
            if(arr[i]=='0' && arr[j]=='1' || arr[i]=='1' && arr[j]=='0'){
                i++;
                j--;
            } else{
                size=j-i+1;
                break;
            }
        }
        
        cout << size << endl;;
    }
}