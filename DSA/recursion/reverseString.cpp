#include<iostream>
using namespace std;

void reverseString(string & str, int i, int j){ // here s is passed by refernce means s wouldnt make a copy

    cout<<"String Passed "<<str<<endl;
    if(i>j){  // base condition
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j); // recursion function
    
}
int main(){
    string s = "vipul";
    reverseString(s, 0, s.length()-1);
    cout<<"final string after reverse"<<s<<endl;;
    
}