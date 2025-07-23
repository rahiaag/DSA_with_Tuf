class Solution {
  public:

    int subarraySum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        
        for (int i=0;i<n;i++){
           sum+=arr[i]*(n-i)*(i+1);
        }
        return sum;
    }
};

/*

generate all teh subarray and then find their sum and add their sum
first approach is using two loops

*/