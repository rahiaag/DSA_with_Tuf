class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int a=0;
        for (int i=0;i<arr.size();i++){
            a^=arr[i];
        }
        return a;
    }
};