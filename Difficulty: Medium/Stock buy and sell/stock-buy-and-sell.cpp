class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int sum=0;
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i+1]>arr[i]){
                sum+=arr[i+1]-arr[i];
            }
        }
        return sum;
    }
};