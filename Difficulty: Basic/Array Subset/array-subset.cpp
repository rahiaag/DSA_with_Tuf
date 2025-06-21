class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int n=a.size();
        int m=b.size();
        unordered_map<int,int>mp;
        if (m>n){
            return false;
        }
        
        for (int i:a){
            mp[i]++;
        }
        for (int i:b){
            if (mp[i]==0){
                return false;
            }
            if (mp.find(i)!=mp.end())
            mp[i]--;
            
        }
        return true;
    }
};