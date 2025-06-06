class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        int m=b.size();
        vector<int>temp;
        
        sort (a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        
        while (i<n && j<m){
            if (a[i]<b[j]){
                i++;
            }
            else if (b[j]<a[i]){
                j++;
            }
            else {
                if (temp.empty() || temp.back()!=a[i] || temp.back()!=b[j])
                temp.push_back(a[i]);
                i++;
                j++;
            }
            }
        return temp;
    }
};