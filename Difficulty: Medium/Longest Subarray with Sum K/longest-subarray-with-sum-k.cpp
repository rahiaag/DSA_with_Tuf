class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int maxCount=0;
        unordered_map<int,int>mp;
        int preSum=0;
        
        for (int i=0;i<n;i++){
            preSum+=arr[i];
            int complement=preSum-k;
            
            if (preSum==k){
                maxCount=i+1;
            }
            
            if (mp.find(complement)!=mp.end()){
                maxCount=max(maxCount,i-mp[complement]);
            }
            if (mp.find(preSum)==mp.end())
            mp[preSum]=i;
        }
        
        return maxCount;
        
    }
};