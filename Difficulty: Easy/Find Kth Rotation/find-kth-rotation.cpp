// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int element=*min_element(arr.begin(),arr.end());
        for (int i=0;i<n;i++){
            if (arr[i]==element){
                return i;
            }
        }
        return -1;
    }
};
