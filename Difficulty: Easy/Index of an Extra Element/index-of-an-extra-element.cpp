class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int n=b.size();
        int index=n;
        
        for (int i=0;i<n;i++){
            if (a[i]!=b[i]){
                index=i;
                break;
            }
        }
        return index;
    }
};