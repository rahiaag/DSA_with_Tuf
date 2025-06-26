class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
       
       /* // code here
        int n=arr.size();
        int maxLen = 0;
for (int i = 0; i < n; ++i) {
    int zeroCount = 0;
    for (int j = i; j < n; ++j) {
        if (arr[j] == 0) zeroCount++;
        if (zeroCount > k) break;
        maxLen = max(maxLen, j - i + 1);
    }
}*/
        
        int n=arr.size();
        int zero=0;
        int left=0;
        int maxLen=INT_MIN;
        for (int i=0;i<n;i++){
            if (arr[i]==0){
                zero++;
            }
        while (zero>k){
            if (arr[left]==0){
                zero--;
            }
            left++;
        }
            
        maxLen=max(maxLen,i-left+1);
        }
        return maxLen;
    }
};
