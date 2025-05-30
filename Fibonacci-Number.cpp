/*
class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;

        return fib(n - 1) + fib(n - 2);
    }
};
*/

class Solution {
public:
    int fib(int n) {

        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
            int a=0;
            int b=1;
            int c=0;
            for (int i=1;i<n;i++){
                c=a+b;
                a=b;
                b=c;
            }
            return c;
    }
};

