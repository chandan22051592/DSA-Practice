#include <iostream>
using namespace std;

class Node{
public :
    int data;
    Node* next;
    Node * pre;

    Node(){
        this->pre = nullptr;
        this->next = nullptr;
    }

    Node(int data){
        this ->data = data;
        this->pre = nullptr;
        this->next = nullptr;
    }

};

void InsertAtTail(Node* &head,Node* &tail, int data){
    // if node is empty
    if(head == nullptr){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        Node *newNode = new Node(data);
        tail->next=newNode;
        newNode->pre=tail;
        tail = newNode;
    }

}

void printLL(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    InsertAtTail(head,tail,10);
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);

    printLL(head);
    return 0;
}