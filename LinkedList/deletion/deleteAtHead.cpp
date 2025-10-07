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
        this->data = data;
        this->next = nullptr;
    }
};

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

void printLL(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

void deleteFromHead(Node* &head){
    Node* temp = head->next;
    delete head;
    head = temp;


}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);

    printLL(head);

    cout<<endl;

    deleteFromHead(head);

    printLL(head);

}