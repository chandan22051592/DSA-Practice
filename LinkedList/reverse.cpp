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


Node *reverseLL(Node *head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nxt = nullptr;

    while(curr != nullptr){
        nxt = curr ->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }

    return prev;
}