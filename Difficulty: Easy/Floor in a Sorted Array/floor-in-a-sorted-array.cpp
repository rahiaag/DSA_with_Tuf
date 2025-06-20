class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        int n=arr.size();
        int floor=-1;
        int low=0;
        int high=n-1;
        
        while (low<=high){
            int mid=low+(high-low)/2;
            
            if (arr[mid]==x){
                floor=mid;
                low++;
            }
            else if (arr[mid]<x){
                floor=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return floor;
    }
};
