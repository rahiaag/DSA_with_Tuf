class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
      vector<pair<int,int>>ans;
      int n=arr1.size();
      unordered_map<int,int>mp;
      for (int i:arr2){
          mp[i]++;
      }
      for (int i=0;i<n;i++){
          if(mp.find(target-arr1[i])!=mp.end()){
              int freq=mp[target-arr1[i]];
              while(freq--)
              ans.push_back({arr1[i],target-arr1[i]});
              // mp[target-arr1[i]] is the frequency and target-arr1[i] is the value
          }
      }
      sort(ans.begin(),ans.end());
      return ans;
    }
};

 /* vector<pair<int,int>>ans;
        
        int n=arr1.size();
        int m=arr2.size();
        
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (arr1[i]+arr2[j]==target){
                    ans.push_back({arr1[i],arr2[j]});
                    
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;*/
        