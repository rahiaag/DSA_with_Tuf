class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int index=0;
        if (n>=2){
        if (arr[0]>arr[1]){
            index=0;
        }
        if (arr[n-1]>arr[n-2]){
            index=n-1;
        }
        }
        for (int i=1;i<n-1;i++){
            if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                index=i;
                break;
            }
        }
        
        return index;
    }
};