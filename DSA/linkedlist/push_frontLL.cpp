#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int val){
    data = val;
    next=NULL;
}
};
class Lists{
    //private
    Node* head;
    Node* tail;
public:
Lists(){
    head=tail=NULL;
}
void push_front(int val){
    Node* newNode = new Node(val); // dynamically can access anywhere
    //Node newNode(val); //static means after function end it doesnt exist.
    if(head==NULL){
        head = tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}
void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}
};
int main(){
    Lists ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.print();
    return 0;
}