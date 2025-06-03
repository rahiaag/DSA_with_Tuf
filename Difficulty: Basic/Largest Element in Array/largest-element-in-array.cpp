class Solution {
  public:
    int largest(vector<int> &arr) {
        priority_queue<int>pq;
        for (int i:arr){
            pq.push(i);
        }
        return pq.top();
        
    }
};

/*
sorting and then giving the greatest element
INT_MAX
priority queue

*/