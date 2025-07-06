// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
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
       return high;
    }
};



/* int n=arr.size();
        int element=*min_element(arr.begin(),arr.end());
        for (int i=0;i<n;i++){
            if (arr[i]==element){
                return i;
            }
        }
        return -1;*/
