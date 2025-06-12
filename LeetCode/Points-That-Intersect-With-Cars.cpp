class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        unordered_map<int,int>mp;

        for (auto interval:nums){
            int first=interval[0];
            int second=interval[1];
            for (int j=first;j<=second;j++){
                mp[j]++;
            }

        }
        return mp.size();
    }
};