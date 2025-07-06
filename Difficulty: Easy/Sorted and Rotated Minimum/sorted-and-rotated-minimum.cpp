class Solution {
  public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        
        while (low<high){
            int mid=low+(high-low)/2;
            
            if (arr[mid]<arr[high]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return arr[high];
    }
};