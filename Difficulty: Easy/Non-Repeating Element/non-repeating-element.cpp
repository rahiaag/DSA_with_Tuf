
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for (auto i:arr){
            mp[i]++;
        }
        
        for (int i=0;i<arr.size();i++){
            if (mp[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }
};
