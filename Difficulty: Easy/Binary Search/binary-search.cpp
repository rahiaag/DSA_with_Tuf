class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int index=INT_MAX;
        
        while (low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==k){
                index=min(index,mid);
                high--;
            }
            if (arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if (index==INT_MAX){
            return -1;
        }
        return index;
    }
    
};