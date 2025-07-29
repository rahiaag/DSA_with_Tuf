#include <algorithm>

class Solution {
  public:
    void sortByLength(vector<string>& arr) {
        // code here
        int n=arr.size();
        vector<tuple<int,int,string>>mp;
        for (int i=0;i<n;i++){
            int m=arr[i].size();
            mp.push_back({m,i,arr[i]});
        }
        
        sort(mp.begin(),mp.end());
        for (int i=0;i<n;i++){
            arr[i]=get<2>(mp[i]);
        }
    }
};
