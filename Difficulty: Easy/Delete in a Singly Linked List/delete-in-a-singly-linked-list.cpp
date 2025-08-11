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
        // code here
        if (head==NULL || head->next==NULL){
            return NULL;
        }
        Node*temp=head;
        if (x==1)
        {
            head=head->next;
            delete temp;
            return head;
        }
        for (int i=1;i<x-1;i++){
            temp=temp->next;
        }
        if (temp==NULL || temp->next==NULL){
            return head;
        }
        Node*deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        return head;
    }
};