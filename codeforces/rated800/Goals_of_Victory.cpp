#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>score(x-1,0);

        for(int i =0; i<x-1; i++){
            cin>>score[i];
        }
        int sum =0;
        for(int i=0; i<score.size(); i++){
            sum+=score[i];
        }
        sum = -(sum);
        cout<<sum<<endl;
    }
}