// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int val) {
        string num=to_string(val);
        int n=num.size();
        for (int i=0;i<n/2;i++){
            if(num[i]!=num[n-1-i]){
                return false;
            }
        }
        return true;
    }
};