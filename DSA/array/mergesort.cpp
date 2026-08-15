#include<iostream>
using namespace std;

int B[9];

void merge(int A[],int l,int mid, int h){
    int i,j,k;
    i=l,j=mid+1,k=l;
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k]=A[i];
            k++;
            i++;
        }
        else{
            B[k]=A[j];
            k++;
            j++;
        }
    }
    for(;i<=mid;i++){
        B[k]=A[i];
        k++;
    }
    for(;j<=h;j++){
        B[k]=A[j];
        k++;
    }
    for(i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void print(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}


int main(){
    int A[]={2,4,6,8,10,3,5,7,9};
    int l=0,h=8;
    int mid=(l+h)/2;
    

    merge(A,l,mid,h);
    print(A,9);

}