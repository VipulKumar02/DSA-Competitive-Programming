#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
};

void sumNodes(Node* head){
    int sum = 0;
    Node* temp = head;

    while(temp!=nullptr){
        sum=sum+temp->data;
        temp=temp->next;
    }
    cout<<sum;
}

int main(){
    Node n1 = {8, nullptr};
    Node n2 = {3, nullptr};
    Node n3 = {7, nullptr};
    Node n4 = {12, nullptr};

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=nullptr;

    Node* head=&n1;

    sumNodes(head);
    
}