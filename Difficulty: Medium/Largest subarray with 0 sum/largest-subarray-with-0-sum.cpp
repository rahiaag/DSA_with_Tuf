/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n=arr.size();
        int maxCount=0;
        unordered_map<int,int>mp;
        int preSum=0;
        
        for (int i=0;i<n;i++){
            preSum+=arr[i];
            
            if (preSum==0){
                maxCount=i+1;
            }
            
            if (mp.find(preSum)!=mp.end()){
                maxCount=max(maxCount,i-mp[preSum]);
            }
            else{
                mp[preSum]=i;  //isme yeh wali condition bohot important hai
            }
        }
        return maxCount;
    }
};
