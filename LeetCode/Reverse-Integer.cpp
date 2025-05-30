    class Solution {
    public:
        int reverse(int x) {

            int tempNum = x;
            long long result = 0;

            while (tempNum != 0) {
                int val = tempNum % 10;
                result = result * 10 + val;
                tempNum /= 10;
            }
            if (result <= INT_MIN || result >= INT_MAX) {
                return 0;
            }
            return result;
        }
    };