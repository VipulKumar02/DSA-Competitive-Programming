#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[20];
    cout<< "Enter a string: ";
    cin.getline(s1, 20);
    cout << "The string length is: " << strlen(s1) << endl;
}