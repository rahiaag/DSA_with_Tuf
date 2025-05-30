class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int temp = x;
        long result = 0;

        while (temp) {
            int digit = temp % 10;
            result =  result*10 + digit;
            temp /= 10;
        }
        return (result == x);
    }
};