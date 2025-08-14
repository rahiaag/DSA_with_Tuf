// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        
        Node *temp=head;
        while (temp!=NULL){
            int comp=target-temp->data;
            if (mp.find(comp)!=mp.end()){
                ans.push_back({comp,temp->data});
            }
            mp[temp->data]++;
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};