#include<iostream>
using namespace std;

class stack{
public:
int top;
int size;
char *arr;

stack(int size){
    top=-1;
    this->size=size;
    arr = new char[size];
}
    // push
    void push(char x) {
        if(top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    // pop
    void pop() {
        if(top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    // peek
    char peek() {
        if(top == -1) return '\0';
        return arr[top];
    }

    // empty check
    bool isEmpty() {
        return top == -1;
    }
};

bool isValid(string s) {
    stack st(s.length());

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // closing brackets
            if(st.isEmpty()) return false;

            char topElement = st.peek();

            if((ch == ')' && topElement == '(') ||
               (ch == '}' && topElement == '{') ||
               (ch == ']' && topElement == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.isEmpty();
}
int main(){
    string str = "({[])";
    //stack st(5); no need of this
    cout<<boolalpha;
    cout<<isValid(str);

}