class Solution {
  public:
    bool Search(vector<int>& nums, int target) {
        // Code here
         int n=nums.size();
        int low=0;
        int high=n-1;

        while (low<=high){
            int mid=low+(high-low)/2;
            if (nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            if (nums[mid]==target){
                return true;
            }
            if (nums[low]<=nums[mid]){
                if (nums[low]<=target && target<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if (nums[mid]<target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};


// [3,1,2,3,3,3,3]  here the low == mid == high 