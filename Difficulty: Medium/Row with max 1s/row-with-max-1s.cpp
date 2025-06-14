// User function template for C++
class Solution {
  public:
  int countOne(vector<int>matrix){
      int n=matrix.size();
      int count=0;
      for (int i=0;i<n;i++){
          if (matrix[i]==1){
              count++;
          }
      }
      return count;
  }
  
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n=arr.size();
        int m=arr[0].size();
        int maxCount=-1;
        
        int row=-1;
        for (int i=0;i<n;i++){
            if (countOne(arr[i])>maxCount){
                maxCount=countOne(arr[i]);
                row=i;
            }
        }
        return row; 
    }
};

/*

first appraoch using two loops 

as the array is sorted so we check column wise and in whcihever row i find the first 1 it
will be my answer
*/