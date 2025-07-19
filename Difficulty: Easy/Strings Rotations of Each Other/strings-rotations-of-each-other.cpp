class Solution {
  public:
 
    bool areRotations(string &s1, string &s2) {
       string s3=s1+s1;
       
       return s3.find(s2)!=string::npos;
        
    }
};

/* 
  string rotate(string &s1){
      int n=s1.size();
      
      char first=s1[0];
      
      for (int i=0;i<n-1;i++){
          s1[i]=s1[i+1];
      }
      s1[n-1]=first;
      
      return s1;
  }*/
  
  /* Main function
       int n=s1.size();
        
        for (int i=0;i<n;i++){
            if (rotate(s1)==s2){
                return true;
            }
        }
        return false;*/