#include<iostream>
#include<stack>
using namespace std;

class Stack{
public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top > -1){
            cout<<"stack is not empty"<<endl;
            return true;
        }
        else{
            cout<<"stack is empty"<<endl;
            return false;
        }
    }
};

int main(){

    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(44);

    cout<<st.peek()<<endl;

    /*
    //creation of stack
    stack<int> s;
    //push operation
    s.push(3);
    s.push(2);
    //pop operation
    s.pop();

    cout<<"printing top of stack is "<< s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<< endl;
    }
    cout<<"size of stack is "<< s.size()<<endl;
*/
}