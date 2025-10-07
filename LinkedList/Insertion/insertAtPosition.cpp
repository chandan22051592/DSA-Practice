#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->next = nullptr;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};


void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head = newNode;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(tail == nullptr){
        head = newNode;
        tail = newNode;

    }
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->next == nullptr){
            temp->next=newNode;
            newNode->next=nullptr;
            tail=newNode;
        }
        temp=temp->next;
    }



}

int findLen(Node* head){
    Node* temp = head;
    int count =0;

    while(temp != nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    int size = findLen(head);
    if(position<1 || position>size+1){
        cout<<"Enter A Valid Position !!";
        return;
    }

    if(position==1){
        insertAtHead(head,tail,data);
    }
    else if(position == size+1){
        insertAtTail(head,tail,data);
    }
    else{
        Node* newNode = new Node(data);
        Node* curr = head;
        Node* prev=nullptr;

        while (position != 1)
        {
            prev=curr;
            curr = curr->next;
            position--;

        }

        prev->next = newNode;
        newNode->next = curr;


        
    }

}

void printLL(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
}


int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);
    insertAtHead(head,tail,10);

    int data=20;
    int position=8;
    printLL(head);

    insertAtPosition(head,tail,data,position);

    cout<<endl;

    printLL(head);


 
}


    // insertAtHead(head,tail,10);
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,60);
    // insertAtHead(head,tail,70);
    // insertAtHead(head,tail,80);
