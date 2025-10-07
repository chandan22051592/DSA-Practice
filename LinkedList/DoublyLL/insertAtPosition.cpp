#include <iostream>
using namespace std;

class Node{
public :
    int data;
    Node* next;
    Node* pre;

    Node(){
        this->next = nullptr;
        this->pre = nullptr;

    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->pre = nullptr;
    }
};

void insertAtTail(Node* &head,Node* &tail, int data){
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

int getLen(Node *head){
    int n =0;
    if(!head) return 0;
    Node *temp = head;
    while(temp != nullptr){
        n++;
        temp = temp->next;
    }

    return n;
}

void insertAtPosition(Node *&head,Node *&tail,int data,int position){
    if (position <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node(data);

    Node* temp = head;
    int counter = 1;

    while (temp && counter < position - 1) {
        temp = temp->next;
        counter++;
    }

    if (!temp) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->pre = temp;

    if (temp->next) {
        temp->next->pre = newNode;
    } else {
        tail = newNode; // If inserting at the last position
    }

    temp->next = newNode;
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

    Node * head = nullptr;
    Node* tail = nullptr;

    insertAtTail(head,tail, 10);
    insertAtTail(head,tail, 30);
    insertAtTail(head,tail, 40);
    insertAtTail(head,tail, 80);

    int p;
    cout<<"Enter Position :";
    cin>>p;

    int data;
    cout<<"Enter data :";
    cin>>data;

    int n  = getLen(head);

    // assuming 1-based indexing
    if(p > 1 && p<= n){
        insertAtPosition(head,tail,data,p);    
    }else if(p==1){
        insertAtHead(head,tail,data);
    }else{
        insertAtTail(head,tail,data);

    }
    printLL(head);
    return 0;
}

