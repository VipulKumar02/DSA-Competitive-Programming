#include<iostream>
using namespace std;
int main(){
int A[2][3] = {1,2,3,4,5,6}; // 2D array
int B[2][3] = {7,8,9,10,11,12}; // 2D array
int C[2][3]; // 2D array to store the sum

for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        C[i][j] = A[i][j] + B[i][j]; // add corresponding elements
        
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        cout << C[i][j] << " "; // print the sum
    }
    cout << endl;


}
}