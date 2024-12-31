#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){
        this->next=nullptr;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
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


int findlen(Node * head){
    int count = 0;
    Node* temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    Node* head = first;

    cout<<"length of LinkedList :"<<findlen(head)<<endl;
    traverse(head);

    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}