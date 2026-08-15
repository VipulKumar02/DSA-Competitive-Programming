#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;

        int count=0;
        while(count<=6){
            if(x.find(s)!=string::npos){
                cout<<count<<endl;
                break;
            }else{
                x+=x;
                count++;
            }
        }
        if (count > 6 && x.find(s) == string::npos) {
    cout << -1 << '\n';
}
    }
}