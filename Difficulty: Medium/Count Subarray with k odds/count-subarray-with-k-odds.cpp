class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
       
        for (int i=0;i<n;i++){
            if (nums[i]%2==1){
                nums[i]=1;
            }
            else{
                nums[i]=0;
            }
        }

        int count=0;
        unordered_map<int,int>mp;
        int prefix_sum=0;

        for (int i=0;i<n;i++){
            prefix_sum+=nums[i];
            if (prefix_sum==k){
                count++;
            }
            if (mp.find(prefix_sum-k)!=mp.end()){
                count+=mp[prefix_sum-k];
            }
            mp[prefix_sum]++;
        }
        return count;
    }
};