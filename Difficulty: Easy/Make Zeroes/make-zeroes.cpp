// User function Template for C++

class Solution {
  public:
    void MakeZeros(vector<vector<int> >& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<pair<int,int>>mp;
        
       vector<vector<int>>temp=matrix;

        
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    mp.push_back({i,j});
                }
            }
        }
        for (auto i:mp){
            int a=i.first;
            int b=i.second;
            int count=0;
            if (a>0){
                count+=temp[a-1][b];
                matrix[a-1][b]=0;
            }
            if (a<n-1){
                count+=temp[a+1][b];
                matrix[a+1][b]=0;
            }
            if (b>0){
                count+=temp[a][b-1];
                matrix[a][b-1]=0;
            }
            if (b<m-1){
                count+=temp[a][b+1];
                matrix[a][b+1]=0;
            }
            matrix[a][b]=count;
            
            
        }
        
        
        
        
    }
};