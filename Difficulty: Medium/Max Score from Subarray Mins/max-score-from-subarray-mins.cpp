

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int n=arr.size();
        
        int maxVal=INT_MIN;
        vector<int>ans;
        
        for (int i=0;i<n-1;i++){
            ans.push_back(arr[i]+arr[i+1]);
        }
        maxVal=*max_element(ans.begin(),ans.end());
        return maxVal;
    }
};

/*

Easy done by two loops 
*/