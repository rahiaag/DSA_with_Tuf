class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int maxSum=INT_MIN;
        for (int i=0;i<k;i++){
            sum+=nums[i];
        }
        int j=0;
        while (j!=k){
            maxSum=max(maxSum,sum);
            sum-=nums[k-j-1];
            sum+=nums[n-j-1];
            j++;
        }
        maxSum=max(maxSum,sum);
        return maxSum;
    }
};