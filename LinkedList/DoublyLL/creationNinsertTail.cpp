#include <iostream>
using namespace std;

class Node{
public :
    int data;
    Node *pre;
    Node *next;

    Node(){
        this->pre = nullptr;
        this->next= nullptr;
    }

    Node(int data){
        this->data = data;
        this->pre = nullptr;
        this->next= nullptr;

    }
};


void insertAtHead(Node *&head,Node *&tail,int data){

    // if LL is empty
    if(head == nullptr){
        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;

    }
    // LL is not empty
    else{
        Node *newNode = new Node(data);
        head->pre = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void printLL(Node *head){
    Node *temp = head;

    while(temp != nullptr){
        cout<< temp->data << "->";
        temp = temp->next;
    }

}
int main(){

    Node *head = nullptr;
    Node *tail = nullptr;
    
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,5);

    printLL(head);



    return 0;
}