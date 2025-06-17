class Solution {
  public:
    vector<int> find(vector<int>& arr, int target) {
        
        int n=arr.size();
        int low=0;
        int high=n-1;
        int index1=-1;
        
        // find first occurence
        while (low<=high){
            int mid=low+(high-low)/2;
            
            if (arr[mid]==target){
                index1=mid;
                high=mid-1;
            }
            else if (arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        low=0;
        high=n-1;
        int index2=-1;
        
        // find last index
         while (low<=high){
            int mid=low+(high-low)/2;
            
            if (arr[mid]==target){
                index2=mid;
                low=mid+1;
            }
            else if (arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        
        
        return {index1,index2};
        
    }
};

/*
count method
unordered_map
binary search
*/
    
/*
first approach through loop
second approach is through binary search
*/