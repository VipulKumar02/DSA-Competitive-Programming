#include<iostream>
#include<string>

using namespace std;

int main(){ 
    string s1,s2;
    cout <<"Enter a string"<<endl;
    getline(cin,s1);
    cout<<"The string is:"<<s1<<endl;
    
    cout<<s1.capacity()<<endl;

    getline(cin,s2);
    
    s1.append(s2); // Appending second string to first string

    cout<<s1.capacity()<<endl;
    cout<<s1.length()<<endl;

    cout<<s1<<endl;



}