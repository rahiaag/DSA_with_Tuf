class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        set<int>st;
        sort(nums.begin(),nums.end());

        for (auto i:nums){
            int start=i[0];
            int last=i[1];

            for (int j=start;j<=last;j++){
                st.insert(j);
            }
        }
        return st.size();
    }
};