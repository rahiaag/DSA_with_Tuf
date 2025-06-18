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
            else if (mat[i][j]<x){
                i++;
            }
            else{
                j--;
            }
        }
       return false; 
    }
};
/*
i) Using two loops
ii) create a binary search function and for each row apply binary search 
   i) issi mein chota sa optimization yeh hai ki condition apply karde ki first aur last
      element ke beech mien agar target nahi aata to binary search apply nahi karna
      otherwise karna hai
      
iii) flattening the 2D matrix into 1D and then searching for the element
*/