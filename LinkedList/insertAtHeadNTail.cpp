#include <iostream>
using namespace std;


class Node
{

public:
    int data;
    Node *next;
    Node(){
        this->next = nullptr;
    }

    Node(int data){
        this->data= data;
        this->next = nullptr;
    }

};

void traverse(Node * head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" "<<"->"<<" ";
        temp = temp->next;
    }
}
     
void insertAtHead(Node* &head,Node* &tail, int data){


    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
   
    


}

void insertAtTail(Node* &head, Node* &tail, int data){
    
    Node* newNode = new Node(data);
    if(tail == nullptr){
        head = newNode;
        tail= newNode;
    }
    Node * temp = head;

    while(temp != nullptr){
        if(temp->next == nullptr){
            temp->next=newNode;
            newNode->next=nullptr;
        }
        temp = temp->next;
    }
}






int main(){

    Node* head = nullptr;
    Node* tail = nullptr;

    // insertAtHead(head,tail,10);
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,60);
    // insertAtHead(head,tail,70);
    // insertAtHead(head,tail,80);

    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);


    

    traverse(head);

    

    return 0;
}