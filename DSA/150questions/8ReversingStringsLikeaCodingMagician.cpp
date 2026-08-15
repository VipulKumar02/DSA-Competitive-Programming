#include<iostream>
using namespace std;

int main(){
string str="Madam";
string rev="";
int len=str.length();  // calculate length first 

rev.resize(len);  // assign the length of str in rev using resize function

for(int i =0, j=len-1;i<len; i++,j--){
    rev[i]=str[j];
}
rev[len]='\0'; // at end add '/0'
cout<<rev<<endl;

if(str.compare(rev)==0){
    cout<<"Palindrome";
}
else{
    cout<<"Not Palindrome";
}
}