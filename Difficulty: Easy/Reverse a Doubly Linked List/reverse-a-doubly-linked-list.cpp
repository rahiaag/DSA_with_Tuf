/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode *curr=head;
        DLLNode *temp=NULL;
        
        
        while (curr!=NULL){
            DLLNode *nxtNode=curr->next;
            curr->next=temp;
            curr->prev=nxtNode;
            temp=curr;
            curr=nxtNode;
        }
        return temp;
    }
};
/*
using stack
*/ 