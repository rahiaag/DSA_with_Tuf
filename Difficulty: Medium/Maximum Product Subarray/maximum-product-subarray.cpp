class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n=arr.size();
        int maxPro=INT_MIN;
        
        int suffix=1;
        int prefix=1;
        
        for (int i=0;i<n;i++){
            if (suffix==0){
                suffix=1;
            }
            if (prefix==0){
                prefix=1;
            }
            suffix*=arr[i];
        
            prefix*=arr[n-1-i];
            maxPro=max(maxPro,max(suffix,prefix));
            
        }
        return maxPro;
      
    }
};

/*  int n=arr.size();
        int maxPro=INT_MIN;
        
        for (int i=0;i<n;i++){
            int ele=arr[i];
            maxPro=max(maxPro,ele);
            for (int j=i+1;j<n;j++){
                ele*=arr[j];
                maxPro=max(maxPro,ele);
            }
        }
        return maxPro;*/