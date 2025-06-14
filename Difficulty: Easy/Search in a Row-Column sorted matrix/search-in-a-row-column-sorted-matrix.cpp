// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        
        int i=0;
        int j=m-1;
        
        while (i<n && j>=0){
            if (mat[i][j]==x){
                return true;
            }
            else if( mat[i][j] < x ) i++;
            else  j--;
        }
        return false;
    }
};
/*
Two Approaches
first is using 2 loops
second is using binary search
as the matrix is in increasing order or we can say in sorted order so 
we will make the 2D array as 1D array and then find the element

3rd approahc is usign inbuilt function
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
       for(int i=0;i<mat.size();i++){
           if(binary_search(mat[i].begin(),mat[i].end(),x)){
               return true;
               
           }
       }
       
       return false;
    }
};

*/

/*
        int n=mat.size();
        int m=mat[0].size();
        
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (mat[i][j]==x){
                    return true;
                }
            }
        }
        return false;*/