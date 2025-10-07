#include<iostream>
// #include <unordered_map>
using namespace std;


class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    Node(){
        this->next = nullptr;
    }
};


void insertAtTail(Node* &head,Node* &tail,int data){
    
    Node* newNode = new Node(data);

    if(tail == nullptr){
        head = newNode;
        tail = newNode;
    }
    Node *temp= head;

    while(temp!=nullptr){
        if(temp->next == nullptr){
            temp->next = newNode;
            newNode->next = nullptr;
            // tail=newNode;
        }
        temp = temp->next;
    }

}

int printLL(Node *head){
    Node* temp = head;
    int count = 0;
    while(temp!=nullptr){
        // cout<<temp->data<<"->";
        count++;
        temp=temp->next;
    }
    return count;

}
int main(){

    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtTail(head, tail,10);
    insertAtTail(head, tail,20);
    insertAtTail(head, tail,30);
    insertAtTail(head, tail,40);
    insertAtTail(head, tail,50);

    cout<<printLL(head);
    
    
    return 0;
}