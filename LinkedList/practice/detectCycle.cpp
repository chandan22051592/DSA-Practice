#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    
    ListNode *slow_ptr = head;
    ListNode *fast_ptr = head;
    int count=0;
    
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
    	// move the slow_ptr one step at a time
        slow_ptr = slow_ptr->next; 
        
        // move the fast_ptr two steps at a time
        fast_ptr = fast_ptr->next->next; 
       
        count++;
        if (slow_ptr == fast_ptr) { 
            
            return true;
        }
    }
    
   
    return false; 
}

int main() {
    
    ListNode *head = new ListNode(26);
    ListNode *node2 = new ListNode(34);
    ListNode *node3 = new ListNode(84);
    ListNode *node4 = new ListNode(69);
    ListNode *node5 = new ListNode(71);
   
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    node5->next = head; 
   
    
    if (hasCycle(head)) {
        std::cout << "The linked list is circular." << std::endl;
    } else {
        std::cout << "The linked list is not circular." << std::endl;
    }
   
    return 0;
}