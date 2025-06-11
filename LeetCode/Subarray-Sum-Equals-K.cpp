class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
     int n=arr.size();
     unordered_map<int,int>mp;
     int preSum=0;

     int count=0;

     for (int i=0;i<n;i++){
        preSum+=arr[i];
        if (preSum==k){
            count++;
        }
        if (mp.find(preSum-k)!=mp.end()){
            count+=mp[preSum-k];
        }
        mp[preSum]++;
     }
     return count;

    }
};

/*
using kadane algorithm
using two loops


*/

/*int n=arr.size();
     int count=0;
     for (int i=0;i<n;i++){
        int sum=arr[i];
        if (sum==k){
            count++;
        }
        for (int j=i+1;j<n;j++){
            sum+=arr[j];
            if (sum==k){
                count++;
            }
        }
     }
     return count;*/