/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        
        if (head==NULL){
            return NULL;
        }
        
        if (x==1){
            head=head->next;
            return head;
        }
        Node *temp=head;
        for (int i=1;i<x-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
        return head;
    }
};