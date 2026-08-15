#include<iostream>
#include<string>

using namespace std;

int main() {
     string s1,s2;
     int index;
     cout<<"Enter a string"<<endl;
     getline(cin,s1);
     cout<<s1<<endl;
   //  s1.insert(4," hey", 3); // Inserting " hey" at position 4
        cout<<"Enter the index at which you want to insert: ";
        cin>>index;
        cin.ignore(); // To ignore the newline character left in the input buffer
        cout<<"Enter the string 2 to insert: ";
     getline(cin,s2);
     s1.insert(index,s2); // Inserting second string at specified index
     
     cout<<"The string after insertion is: "<<s1<<endl;
}