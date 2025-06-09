/*class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> rows;
        vector<int> column;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    column.push_back(j);
                }
            }
        }

        for (int i = 0; i < rows.size(); i++) {
            int index = rows[i];
            for (int j = 0; j < m; j++) {
                matrix[index][j] = 0;
            }
        }

        for (int i = 0; i < column.size(); i++) {
            int index = column[i];
            for (int j = 0; j < n; j++) {
                matrix[j][index] = 0;
            }
        }
    }
};
*/

/*
ek vector wala method
ek ussi row and column ko 0 bna diya hai fir karne lge

*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool row=false;
        bool column=false;

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    if (i==0) row=true;
                    if (j==0)column=true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for (int i=1;i<n;i++){
            for (int j=1;j<m;j++)
            if (matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }

         if(column){
            for(int i = 0; i < matrix.size(); i++) matrix[i][0] = 0;
        }
        if(row){
            for(int j = 0; j < matrix[0].size(); j++) matrix[0][j] = 0;
        }
        
    }
};