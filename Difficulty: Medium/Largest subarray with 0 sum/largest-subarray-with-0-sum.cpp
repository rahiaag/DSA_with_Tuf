class Solution {
  public:
    int maxLen(vector<int>& arr) {
        
        int n=arr.size();
        int maxCount=0;
        unordered_map<int,int>mp;
        int preSum=0;
        int count=0;
        
        for (int i=0;i<n;i++){
            preSum+=arr[i];
            
            if (preSum==0){
                maxCount=i+1;
            }
            if (mp.find(preSum)!=mp.end()){
                maxCount=max(maxCount,i-mp[preSum]);
            }
            else {
                mp[preSum]=i;
            }
        }

        return maxCount;
    }
};

/* int maxCount=INT_MIN;
        for (int i=0;i<n;i++){
            int sum=arr[i];
            int count=1;
            if (sum==0){
                maxCount=max(count,maxCount);
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                count++;
                if (sum==0){
                    maxCount=max(maxCount,j-i+1);
                }
            }
        }
        if (maxCount==INT_MIN){
            maxCount=0;
        }
        return maxCount;*/