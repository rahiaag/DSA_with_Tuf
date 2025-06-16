
class Solution {
  public:
  // its always n*n so no problem will be there
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>temp(n,vector<int>(m,0));
        
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                temp[j][i]=mat[i][n-1-j];
            }
        }
        mat=temp;
        
    }
};
