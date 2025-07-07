// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for (int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int value=0;
        for (int i=0;i<k;i++){
            value=pq.top();
            pq.pop();
        }
        return value;
    }
};

/*
sorting and then return k only work when dulicate not present
use set
use priority queue
*/