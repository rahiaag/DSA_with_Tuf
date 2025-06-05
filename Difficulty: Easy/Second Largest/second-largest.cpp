class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        if (n<2){
            return -1;
        }
        sort(arr.begin(),arr.end());
        int largest=arr[n-1];
        int secMax=-1;
        for (int i=n-2;i>=0;i--){
            if (arr[i]!=largest){
                secMax=arr[i];
                break;
            }
        }
        return secMax;
    }
};