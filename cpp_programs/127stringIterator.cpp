#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "programming";
    string::iterator it;

    for(it=s1.begin(); it!=s1.end(); it++){
       // cout<<*it;
       *it-=32; //  *it = *it - 32; Convert to uppercase
    }
    cout<<s1<<endl; // Output: PROGRAMMING


}
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "programming";
    
    for(int i=0; s[i]!='\0'; i++){
    cout<<s1[i];
    }
    cout<<endl; // Output: programming}





*/ 








