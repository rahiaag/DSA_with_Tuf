class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0;i<n;i++){
        currSum=max(currSum+arr[i],arr[i]);
        maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};