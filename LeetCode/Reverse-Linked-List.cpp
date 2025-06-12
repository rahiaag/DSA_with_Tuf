/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode *temp=head;
        while (temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        int n=st.size();

        for (int i=0;i<n;i++){
            int data=st.top();
            temp->val=data;
            temp=temp->next;
            st.pop();
        }
        return head;
    }
};