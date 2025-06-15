
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<vector<int>>val;
        
        for (int i=0;i<n;i++){
            vector<int>result(i+1,1);
            for (int j=1;j<i;j++){
                result[j]=val[i-1][j-1]+val[i-1][j];
            }
            val.push_back(result);
        }
        return val[n-1];
    }
};
