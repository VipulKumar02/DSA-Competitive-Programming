#include<iostream>
using namespace std;

void merge(int A[], int l, int mid, int h){
    int B[8];
    int i=l, j=mid+1, k=l;
    
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
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }
    for(i=l;i<=h;i++){
        A[i]=B[i];
    }
}

void mergesort(int A[],int l, int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
void print(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}


int main(){
    int A[]={8,2,9,6,5,3,7,4};
    int l=0,h=7;
    
    mergesort(A,l,h);
    print(A,8);
    
}