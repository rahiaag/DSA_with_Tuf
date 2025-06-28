class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int n=arr.size();
        int index=-1;
        
        if (arr[0]==1){
            return 0;
        }
        for (int i=1;i<n;i++){
            if (arr[i]==1){
                return i;
            }
        }
        return index;
    }
};