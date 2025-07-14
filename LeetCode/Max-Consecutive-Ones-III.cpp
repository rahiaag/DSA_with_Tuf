class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int maxCount = 0;

        while (r < n) {
            if (nums[r] == 0) {
                count++;
            }
            if (count > k) {
                if (nums[l] == 0) {
                    count--;
                }
                l++;
            }
            maxCount = max(maxCount, r - l + 1);
            r++;
        }
        return maxCount;
    }
};
// tc o(2n)

/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int maxCount = 0;

        while (r < n) {
            if (nums[r] == 0) {
                count++;
            }
            while (count > k) {
                if (nums[l] == 0) {
                    count--;
                }
                l++;
            }
            maxCount = max(maxCount, r - l + 1);
            r++;
        }
        return maxCount;
    }
};

*/
/*
       int n = nums.size();
       int maxCount = 0;

       for (int i = 0; i < n; i++) {
           int count = 0;
           int num=k;
           for (int j = i; j < n; j++) {
               if (nums[j] == 0) {   // the mistake i was doing is that i was
   directly reducing the k but if i reduce the k for 1 iteration
               // then it will remain reduced for other iteration as well
                   if (num == 0) {
                       break;
                   }
                   num--;
                   count++;
               } else {
                   count++;
               }
           }
           maxCount = max(maxCount, count);
       }
       return maxCount;*/
// Time limit Exceed