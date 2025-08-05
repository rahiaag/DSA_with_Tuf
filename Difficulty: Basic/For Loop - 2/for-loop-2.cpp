class Solution {
  public:
    void printEvenIndices(const string& s) {
        // code here
        for (int i=0;i<s.size();i+=2){
            cout<<s[i];
        }
    }
};