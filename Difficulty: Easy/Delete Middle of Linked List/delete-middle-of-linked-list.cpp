class Solution {
  public:
    Node* deleteMid(Node* head) {
        if (head==NULL|| head->next==NULL){
            delete head;
            return NULL;
        }
        Node *temp=head;
        int len=0;
        while (temp!=NULL){
            
            len++;
            temp=temp->next;
        }
        temp=head;
        int mid=len/2;
           for(int i=0;i<mid-1;i++){
               temp=temp->next;
           }
           
           temp->next=temp->next->next;
     return head;   
    }
};