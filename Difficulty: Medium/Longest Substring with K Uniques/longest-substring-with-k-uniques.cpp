class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n=s.size();
        int l=0;
        int r=0;
        int maxCount=-1;
        unordered_map<char,int>mp;
        
        while (r<n){
           mp[s[r]]++;
            if (mp.size()>k){
                mp[s[l]]--;
                if (mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
             if (mp.size()==k){
                maxCount=max(maxCount,r-l+1);
            }
            r++;
        }
        return maxCount;
    }
};

// Brute force explore all the substring and when the distinct character are equal to k in map then return 
// the maximum

/*
        int n=s.size();
        int maxCount=-1;
        for (int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for (int j=i;j<n;j++){
                    mp[s[j]]++;
                    if (mp.size()>k){
                        break;
                    }
                    if (mp.size()==k){
                        maxCount=max(maxCount,j-i+1);
                    }
                }
            }
        return maxCount;*/