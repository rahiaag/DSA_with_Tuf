class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
      unordered_map<char,int>mp;
      int l=0;
      int maxCount=0;
      for (int r=0;r<n;r++){
        if (mp.find(s[r])!=mp.end()){
            l=max(l,mp[s[r]]+1);  // where i have seen the last seen element move 1 step ahead from it
        }
        mp[s[r]]=r;
        maxCount=max(maxCount,r-l+1);
      }
      return maxCount;
    }
};


/*
        int n = s.size();
        int maxCount=0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            unordered_map<char, int> mp;
            for (int j = i; j < n; j++) {
                if (mp.find(s[j]) != mp.end()) {
                    break;
                }
                mp[s[j]]++;
                count++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
        */