
class Solution {
  public:
    // Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
        // Your code here
        for (int i=0;i<n;i++){
            if (arr[i]==0){
                arr[i]=-1;
            }
        }
        int count=0;
        
        unordered_map<int,int>mp;
        mp[0]=1;
        int preSum=0;
        for (int i=0;i<n;i++){
            preSum+=arr[i];
           
            if (mp.find(preSum)!=mp.end()){
                count+=mp[preSum];
            }
            mp[preSum]++;
        }
        return count;
    }
};