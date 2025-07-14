class Solution {
  public:
  
  string binary(int n){
      string result="";
      
      while (n!=0){
          if (n%2==1){
              result+='1';
          }
          else{
              result+='0';
          }
          n=n/2;
      }
      return result;
  }
    int maxConsecutiveOnes(int n) {
        
        string res=binary(n);
        int m=res.size();
        int count=0;
        int maxCount=0;
        
        for (int i=0;i<m;i++){
            if (res[i]=='1'){
                count++;
            }
            else{
                count=0;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
