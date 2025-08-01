// User function Template for C++
class Solution {
  public:
  
  long long factorial(long long n){
      long long mul=1;
      for (int i=1;i<=n;i++){
          mul*=i;
      }
      return mul;
  }
    vector<long long> factorialNumbers(long long n) {
        vector<long long>ans;
        if (n==2 || n==3){
            return {1,2};
        }
        for (int i=1;i*i<=n;i++){
            if (factorial(i)>n){
                break;
            }
            if (factorial(i)<=n){
                ans.push_back(factorial(i));
            }
            
        }
        return ans;
    }
};