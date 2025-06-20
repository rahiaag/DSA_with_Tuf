// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        
        int low=1;
        int high=n;
        int val=0;
        
        while (low<=high){
            int mid=low+(high-low)/2;
            
            long long ans=1;
            ans=mid*mid;
            
            
            if (ans==n){
                return mid;
            }
            else if (ans<n){
                val=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return val;
    }
};