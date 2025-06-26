class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int n=a.size();
        int m=b.size();
        
        if (m>n){
            return false;
        }
        unordered_map<int,int>mp;
        
        for (int i:a){
            mp[i]++;
        }
        
        for (int i=0;i<m;i++){
            if (mp[b[i]]==0){
                return false;
            }
            if (mp.find(b[i])!=mp.end()){
                mp[b[i]]--;
            }
        }
        return true;
    }
};