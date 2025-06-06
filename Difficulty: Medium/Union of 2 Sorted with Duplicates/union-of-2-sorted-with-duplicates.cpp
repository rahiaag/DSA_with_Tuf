class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // 
        int n=a.size();
        int m=b.size();
        vector<int>temp;
        int i=0;
        int j=0;
    
        while (i<n &&j<m){
            if (a[i]<b[j]){
                if (temp.empty()|| temp.back()!=a[i])
                temp.push_back(a[i]);
                i++;
            }
            else{
                if (temp.empty()|| temp.back()!=b[j])
                temp.push_back(b[j]);
                j++;
            }
        }
        
        while (i<n){
                if (temp.empty()|| temp.back()!=a[i])
                temp.push_back(a[i]);
                i++;
                
            }
        
        while (j<m){
                if (temp.empty()|| temp.back()!=b[j])
                temp.push_back(b[j]);
                j++;
        }
        // return vector with correct order of elements
        return temp;
    }
};

/*
using hashmap or hashset


*/