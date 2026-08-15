#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int val){
    data= val;
    next=NULL;
}
};
class list{
    Node* head;
    Node* tail;
public:
    list(){
        head=tail=NULL;
    }
void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if(head==NULL){
            return;
        }
        else{
            Node* temp = head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        
    }

    void pop_back(){
        Node* temp = head;
        if(head==NULL){
            return;
        }
        else{
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail; // here, delete only erase data of tail not keyword
            tail=temp;
        }
    }

    void insert(int val, int pos){
        Node* temp= head;
        if(pos<0){
            return;
        }
        else if(pos==0){
            push_front(val);
        }
        else{
            for(int i =0; i<pos-1;i++){
                if(temp==NULL){
                    cout<<"inValid/n";
                }
                temp=temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next=newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    list ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.insert(4,1);



    ll.print();

    return 0;
}