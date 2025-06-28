class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int n=arr.size();
     int low=1;
     int high=n-2;

     while (low<=high){
        int mid=low+(high-low)/2;

        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if (arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return -1;
    }
};


 /*  int n=arr.size();
        int index=0;
        int minElement=INT_MIN;
        for (int i=0;i<n;i++){
            if (arr[i]>minElement){
                minElement=arr[i];
                index=i;
            }
        }
        return index;*/
/*
simply traverse the array adn find the maximum element
second is binary search 

*/