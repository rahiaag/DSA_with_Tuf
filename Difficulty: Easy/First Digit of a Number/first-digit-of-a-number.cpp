// User function Template for C++

// Complete the function
int firstDigit(int n) {
    int val=0;
    while (n!=0){
        val=n%10;
        n/=10;
    }
    return val;
}