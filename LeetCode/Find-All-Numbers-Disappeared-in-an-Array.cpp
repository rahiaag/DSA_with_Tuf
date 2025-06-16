class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        
        for (int i=0;i<n;i++){
            int index=abs(nums[i])-1;
            if (nums[index]>0){
                nums[index]=-nums[index];
            }
        }

        for (int i=0;i<n;i++){
            if (nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};

/*      int n=nums.size();
        vector<int>freq(n+1,0);
        vector<int>ans;

        for (auto i:nums){
            freq[i]++;
        }
        for (int i=1;i<=n;i++){
            if (freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
        */