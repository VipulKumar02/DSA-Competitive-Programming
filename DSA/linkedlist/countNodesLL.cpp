#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};
void counting(Node* head){
    int count =0;
    Node* temp=head;
    while(temp!=nullptr){
        count++;
        temp= temp->next;
    }
    cout<<count<<endl;
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

    counting(head);
    // we can do same thing by recurssive approach

}