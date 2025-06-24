class Solution {
  public:
    string isPrime(int n) {

        if (n==1){
            return "No";
        }
        

        for (int i = 2; i <= sqrt(n); i++) {
            if (n%i==0){
                return "No";
            }
            
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/

            // return  Yes if n is a prime number ,else return No
        }
        return "Yes";
    }
};