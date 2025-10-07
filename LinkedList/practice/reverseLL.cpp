#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void traverse(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;

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

Node* reversLL(Node* head) {
    Node *prev = nullptr;
    Node *curr = head;
    Node *nxt = nullptr;

    
    while (curr != nullptr) {
        nxt = curr->next;  // Save the next node
        curr->next = prev;  // Reverse the current node's pointer
        prev = curr;        // Move prev and curr one step forward
        curr = nxt;
        
    }
    

    return prev;  // 'prev' will be the new head of the reversed section
}



int main(){

    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtTail(head, tail,10);
    insertAtTail(head, tail,20);
    insertAtTail(head, tail,30);
    insertAtTail(head, tail,40);
    insertAtTail(head, tail,50);
    insertAtTail(head, tail,60);
    traverse(head);
    cout<<endl;

    Node *newHead =  reversLL(head);

    traverse(newHead);



}