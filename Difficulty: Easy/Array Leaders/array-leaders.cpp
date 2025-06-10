

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        int maxEle=INT_MIN;
        for (int i=n-1;i>=0;i--){
            if (arr[i]>=maxEle){
                ans.push_back(arr[i]);
                maxEle=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};