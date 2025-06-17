class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int low = 1;   
        int high = n - 2;

        if (n == 1)
            return 0;
        if (arr[0] > arr[1])
            return 0;
        if (arr[n - 1] > arr[n - 2])
            return n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[mid + 1] && arr[mid]>arr[mid-1]) {
                return mid;
            } else if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};
// time complexiyt o(n)

/*
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
        */