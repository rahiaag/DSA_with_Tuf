class Solution {

  public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        
        int rowBegin=0;
        int rowEnd=n-1;
        int colBegin=0;
        int colEnd=m-1;
        
        vector<int>ans;
        
        while (rowBegin<=rowEnd && colBegin<=colEnd){
            for (int i=colBegin;i<=colEnd;i++){
                ans.push_back(a[rowBegin][i]);
            }
            rowBegin++;
            
            for (int i=rowBegin;i<=rowEnd;i++){
                ans.push_back(a[i][colEnd]);
            }
            colEnd--;
            
             if (rowBegin <= rowEnd) {   // for checking single row 
                for (int i = colEnd; i >= colBegin; i--) {
                    ans.push_back(a[rowEnd][i]);
                }
                rowEnd--;
            }
            

            // Traverse Bottom to Top 
            if (colBegin <= colEnd) {      // for checking single column
                for (int i = rowEnd; i >= rowBegin; i--) {
                    ans.push_back(a[i][colBegin]);
                }
                colBegin++;
            }
            
        }
        
        
        return ans[k-1];
        
    }
};