class Solution {
  public:
    int nthRoot(int n, int m) {
        int low=1;
        int high=m;
        
        
        while (low<=high){
            int val=n;
            int mid=low+(high-low)/2;
            long long ans=1;
            while (val){
                ans*=mid;
                val--;
            }
            if (ans==m){
                return mid;
            }
            else if (ans>m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    
   return -1;
        
}
};

 /*for (int i=1;i<=m;i++){
        long long ans=1;
        for (int j=1;j<=n;j++){
            ans*=i;
            if (ans>m){
                break;
            }
            
        }
        if (ans==m){
                return i;
            }
    }
    return -1;*/