class Solution {

  public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        
        int rowBegin=0;
        int rowEnd=n-1;
        int colBegin=0;
        int colEnd=m-1;
        int count=0;
        
        vector<int>ans;
        
        while (rowBegin<=rowEnd && colBegin<=colEnd){
            for (int i=colBegin;i<=colEnd;i++){
                count++;
                if (count==k){
                return a[rowBegin][i];
            }
            }
            rowBegin++;
            
            for (int i=rowBegin;i<=rowEnd;i++){
                count++;
                if (count==k){
                return a[i][colEnd];
            }
            }
            colEnd--;
            
             if (rowBegin <= rowEnd) {   // for checking single row 
                for (int i = colEnd; i >= colBegin; i--) {
                 count++;
                if (count==k){
                return a[rowEnd][i];
                }
                }
                rowEnd--;
            }
            

            // Traverse Bottom to Top 
            if (colBegin <= colEnd) {      // for checking single column
                for (int i = rowEnd; i >= rowBegin; i--) {
                  count++;
                if (count==k){
                return a[i][colBegin];
                }
                }
                colBegin++;
            }
            
        }
        return 0;
    }
};