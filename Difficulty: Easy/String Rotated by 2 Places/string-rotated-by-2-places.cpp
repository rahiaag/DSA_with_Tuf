class Solution {
  public:
  void rotateLeft(string &s1){
      int n=s1.size();
      int m=2;
      while (m){
      int temp=s1[0];
      for (int i=1;i<n;i++){
          s1[i-1]=s1[i];
      }
      s1[n-1]=temp;
      m--;
  }
  }
  
  void rotateRight(string &s1){
      int n=s1.size();
      int m=2;
      while (m){
      int temp=s1[n-1];
      for (int i=n-1;i>0;i--){
          s1[i]=s1[i-1];
      }
      s1[0]=temp;
      m--;
  }
  }
    bool isRotated(string& s1, string& s2) {
        string left=s1;
        string right=s1;
        rotateRight(right);
        rotateLeft(left);
        if ((left==s2) || (right==s2)){
            return true;
        }
        return false;
        
    }
};
