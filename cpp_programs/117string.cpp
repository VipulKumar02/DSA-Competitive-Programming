#include <iostream>
using namespace std;

int main() {
    char s[50]; // Declare a character array to hold the string input
    cout<<"Enter name:"<<endl;
    cin.get(s,50); // Using cin.get to read a string input
    // cin.getline(s,50); // Alternatively, you can use cin.getline to read a string input
   cout << "You entered: " << s << endl; // Output the string 

cin.ignore(); // Clear the newline character from the input buffer

    // Example of using cin.get to read a string input

   char s2[50]; // Declare a character array to hold the string input
    cout<<"Enter name:"<<endl;
    cin.get(s2,50); // Using cin.get to read a string input
     // cin.getline(s2,50); // Alternatively, you can use cin.getline to read a string input
   cout << "You entered: " << s2 << endl; // Output the string 
}


// we use cin.getline to read a string input, it reads the entire line until a newline character is encountered and it take both input after enter press 
