class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int n=s.size();
        int count=0;
        for (int i=0;i<n;i++){
            int hash[3]={0};
            for(int j=i;j<n;j++){
                hash[s[j]-'a']=1;
                if (hash[0]+hash[1]+hash[2]>=3){
                    count=count+(n-j);
                    break;
                }
            } 
        }
        return count;
    }
};

/*

TC= O(N^2)
SC= O(1)

*/