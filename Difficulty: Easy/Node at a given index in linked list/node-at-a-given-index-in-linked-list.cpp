/* Print he nth node in the linked list Node is defined as
/* Link list node
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list

class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        Node *temp=head;
        if (head==NULL){
            return NULL;
        }
        int len=1;
        while (temp!=NULL){
            temp=temp->next;
            len++;
        }
        temp=head;
        if (index>len){
            return -1;
        }
        for (int i=1;i<index;i++){
            temp=temp->next;
        }
        return temp->data;
    }
};