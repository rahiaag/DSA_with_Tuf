/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // code here
        unordered_map<Node*,int>mp;
        Node *temp=head;
        if (head==NULL || head->next==NULL){
            return false;
        }
        
        while (temp!=NULL){
            if (mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]++;
            temp=temp->next;
            
        }
        return false;
    }
};