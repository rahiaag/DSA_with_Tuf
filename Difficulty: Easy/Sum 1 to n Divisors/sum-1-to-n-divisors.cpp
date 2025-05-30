class Solution {
  public:
    long long sumOfDivisors(long long n) {
    
    long long totalSum = 0;
    for (long long i = 1; i <= n; i++) {
        totalSum += i * (n / i); // i is added (n / i) times
    }
    return totalSum;

    }
};