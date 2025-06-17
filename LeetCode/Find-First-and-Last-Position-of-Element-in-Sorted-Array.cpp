class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int index1 = -1;

        // find first occurence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                index1 = mid;
                high = mid - 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0;
        high = n - 1;
        int index2 = -1;

        // find last index
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                index2 = mid;
                low = mid + 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {index1, index2};
    }
};

// first appraoch

/* int ans1=-1;
        int ans2=-1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                ans1=i;
                break;
            }
        }

         for (int i=nums.size()-1;i>=0;i--){
            if (nums[i]==target){
                ans2=i;
                break;
            }
        }

return {ans1,ans2};
    }
};*/