class Solution {
  public:
  int GCD(int a,int b){
      
      int ans=1;
      
      for (int i=2;i<=min(a,b);i++){
          if (a%i==0 && b%i==0){
              ans=max(ans,i);
          }
      }
      return ans;
  }
  int LCM(int a,int b){
      int val=GCD(a,b);
      int lcm=a*b/val;
      
      return lcm;
  }
  
    vector<int> lcmAndGcd(int a, int b) {
    return {LCM(a,b),GCD(a,b)};
        
    }
};