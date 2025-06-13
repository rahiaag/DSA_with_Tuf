class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int maxCount=0;
        unordered_map<int,int>mp;
        int preSum=0;
        mp[0]=-1;
        
        for (int i=0;i<n;i++){
            preSum+=arr[i];
            
            if (preSum==k){
                maxCount=i+1;
            }
            int comp=preSum-k;
            
            if (mp.find(comp)!=mp.end()){
                maxCount=max(maxCount,i-mp[comp]);
            }
            if (mp.find(preSum)==mp.end()){
                mp[preSum]=i;
            }
        }
        return maxCount;
        
    }
};