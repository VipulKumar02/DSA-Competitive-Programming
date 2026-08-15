#include<iostream>
#include<vector>
using namespace std;
vector<int> single(vector<int>&A){
    int n=A.size();
    int max=A[0];
    vector<int>C;

    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }

    int *B=new int[max+1]();
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    
    for(int i=1;i<=max;i++){
        if(B[i]==1){
            C.push_back(i);
        }
    }
    delete[]B;
    return C;
}

int main(){
    vector<int>num={4,1,2,1,2};
    vector<int>ans=single(num);
    
    for(int x : ans) {
        cout << x << " ";
    }
}