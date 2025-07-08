class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
        int n=arr.size();
        int prefix_sum=0;
        unordered_map<int,int>mp;
        int count=0;

        for (int i=0;i<n;i++){
            prefix_sum+=arr[i];
            if (prefix_sum==goal){
                count++;
            }

            if (mp.find(prefix_sum-goal)!=mp.end()){
                count+=mp[prefix_sum-goal];
            }
            mp[prefix_sum]++;
        }
        return count;
    }
};

 /*
        int n=arr.size();
        int count=0;

        for (int i=0;i<n;i++){
            int sum=arr[i];
            if (sum==goal){
                count++;
            }
            for (int j=i+1;j<n;j++){
                sum+=arr[j];
                if (sum==goal)count++;
            }
        }
        return count;*/