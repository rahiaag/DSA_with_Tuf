/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // Code here
        if (head==NULL || head->next==NULL){
            return 0;
        }
        unordered_map<Node*,int>mp;
        Node *temp=head;
        while (temp!=NULL){
            if (mp.find(temp)!=mp.end()){
                break;
            }
            mp[temp]++;
            temp=temp->next;
        }
        if (temp==NULL){
            return 0;
        }
        int count=1;
        Node *curr=temp->next;
        while (curr!=temp){
            curr=curr->next;
            count++;
        }
        return count;
    }
};