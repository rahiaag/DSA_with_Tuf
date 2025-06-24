class Solution {
  public:
    int binaryToDecimal(string &b) {
        int n=b.size()-1;
    
        int sum=0;
        int j=0;
        for (int i=n;i>=0;i--){
            sum+=(b[i]-'0')*pow(2,j);
            j++;
        }
        return sum;
    }
};