#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        bool continousdots = false;
        int dots =0;

        for(int i =0; i<n; i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                continousdots = true;
                break;
            }
            if(s[i]=='.'){
                dots++;
            }
        }
        if(continousdots){
            cout<<2<<endl;
        }else{
            cout<<dots<<endl;
        }
    }
}
