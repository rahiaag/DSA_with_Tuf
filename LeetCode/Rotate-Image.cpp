class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>temp(n,vector<int>(n,0));
        
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                temp[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=temp;
        /*
        int n=matrix.size();
        int m=matrix[0].size();
        
        for (int i=0;i<n;i++){
            for (int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
for (int i = 0; i < n; ++i)
            reverse(matrix[i].begin(), matrix[i].end());*/
    }
};