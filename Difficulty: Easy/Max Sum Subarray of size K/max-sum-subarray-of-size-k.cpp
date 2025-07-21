class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int r=0;
        int l=0;
        int sum=0;
        int maxSum=0;
        while (r<n){
            sum+=arr[r];
            k--;
            if (k==0){
                maxSum=max(maxSum,sum);
                sum-=arr[l];
                l++;
                k++;
            }
            r++;
        }
        return maxSum;
    }
};

/*
Brute force
i) sort the array in descending order and add upto k the element
ii) 



*/