/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        Node *temp=head;
        Node *dummy=new Node(x);
        dummy->next=NULL;
        if (head==NULL){
            return dummy;
        }
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=dummy;
        return head;
        
    }
};