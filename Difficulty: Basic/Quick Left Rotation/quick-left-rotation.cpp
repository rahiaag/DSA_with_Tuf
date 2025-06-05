class Solution {

  public:
    void leftRotate(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>nums(n);
        k=k%n;
        for (int i=0;i<n;i++){
            nums[i]=arr[(i+k)%n];
        }
        arr=nums;
        /*int n=arr.size();
        k=k%n;
        while (k--){
            int temp=arr[0];
            for (int i=1;i<n;i++){
                arr[i-1]=arr[i];
            }
            arr[n-1]=temp;
        }*/
    }
};

/*

first approach using loop
second approach is using mathematical terms
thrid approach reversing the array

*/