#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int sumNodesRecurrsion(Node* head){
    
    Node* temp = head;

    if(temp==nullptr){
        return 0;
    }
    else{
        return sumNodesRecurrsion(temp->next)+temp->data;
    }
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

    cout<<sumNodesRecurrsion(head);

}