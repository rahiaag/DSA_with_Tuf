class Solution {
public:

// it is rotated so there will be one case where the previous element is greater than the next element as in sorted we go in ascending order
// but as it is rotated also 
    bool check(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        for (int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]){
                count++;
            }
        }
        if (arr[0]<arr[n-1]){
            count++;
        }
        if (count>1){
            return false;
        }
        return true;
    }
};