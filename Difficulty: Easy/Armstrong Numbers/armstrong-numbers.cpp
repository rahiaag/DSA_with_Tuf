// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int temp=n;
        int sum=0;
        while (temp){
            int val=temp%10;
            sum+=(val*val*val);
            temp/=10;
        }
        return (sum==n);
    }
};