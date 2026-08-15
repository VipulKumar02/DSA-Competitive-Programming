#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int g,x;
        cin>>g>>x;
        vector<int>gasstation(g);
        for(int i=0; i<g; i++){
            cin>>gasstation[i];
        }
        sort(gasstation.begin(),gasstation.end());
        int dist = gasstation[0];
        int mx = gasstation[g-1];
        int j =1; int i =0;
        while(j<g){
            dist = max(gasstation[j]-gasstation[i],dist);
            j++;
            i++;
        }
        dist = max(dist,(2*(x-mx)));
        cout<<dist<<endl;
    }
}
