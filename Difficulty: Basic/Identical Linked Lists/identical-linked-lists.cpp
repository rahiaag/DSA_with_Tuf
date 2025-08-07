/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node*temp1=head1;
        Node *temp2=head2;
        
        if (head1==NULL && head2==NULL){
            return true;
        }
        
        while (temp1!=NULL && temp2!=NULL){
            if (temp1->data!=temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
       return temp1==NULL && temp2==NULL;
    }
};