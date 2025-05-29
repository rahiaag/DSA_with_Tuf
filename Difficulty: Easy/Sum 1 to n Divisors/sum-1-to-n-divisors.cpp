class Solution {
  public:
  
  int summation(int n){
      int sum=0;
      for (int i=1;i<=n;i++){
          if (n%i==0){
          sum+=i;
          }
      }
      return sum;
  }
    long long sumOfDivisors(long long n) {
        int totalSum=0;
        
        for (int i=1;i<=n;i++){
            totalSum+=summation(i);
        }
        return totalSum;
        
    }
};