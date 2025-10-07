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

// Node *reversLL(Node* head,int k )
// {
//     Node *prev = nullptr;
//     Node *curr = head;
//     Node *nxt = nullptr;
//     int i=0;

//     while (curr != nullptr && i<k)
//     {
//         nxt = curr->next;
//         curr->next = prev;
//         prev = curr;
//         i++;
//         curr = nxt;
//         // nxt = curr->next;
//     }
//     return prev;
// }

int convertToInt(Node *head){
        int ans = 0;
        int multiplier = 1;
        
        while(head!=NULL){
            ans = ans + ((head->data) * multiplier);
            multiplier *= 10;
            head = head -> next;
            
        }
        return ans;
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


Node* convertToLL(int num){
        Node* head = NULL;
        Node* temp = NULL;
        
        while(num){
            int data = num%10;
            Node *newNode = new Node(data);
            
            if(head == NULL){
                head = newNode;
                temp = newNode;
                
            }else{
                temp->next = newNode;
                temp = newNode;
                
                
            }
            
            num = num/10;
        }
        
        return head;
        
    }


int main(){

    Node* head = nullptr;
    Node* tail = nullptr;
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtTail(head,tail,5);
    
    // traverse(head);
    // cout<<endl;
    

    // head =  reversLL(head);

    // cout<<convertToInt(head)<<endl;

    Node* newHead = convertToLL(63448);

    // cout<<endl;

    traverse(newHead);

    

    return 0;
}