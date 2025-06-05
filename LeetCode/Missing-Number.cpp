class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int misTerm=nums[n-1]+1;
       for (int i=0;i<n;i++){
        if (nums[i]!=i){
            misTerm=i;
            break;
        }
       }
       return misTerm;

    }
};

/* int n=nums.size();
        int orgSum=(n*(n+1))/2;
        int numSum=0;

        for (int num:nums){
            numSum+=num;
        }
        return (orgSum-numSum);
        */