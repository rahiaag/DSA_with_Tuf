// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        int x=0;
        for (int i=0;i<n;i++){
            x=arr[i]^x;
        }
        return x;
    }
};