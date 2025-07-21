class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.size();
       int l=0;
       int r=0;
       int maxCount=0;
       unordered_map<char,int>mp;
       while (r<n){
        

        while (mp.find(s[r])!=mp.end()){
            mp[s[l]]--;
            if (mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
         mp[s[r]]++;
        maxCount=max(maxCount,r-l+1);
        r++;
       }
       return maxCount;
    }
};

/*
Brute force
i will use two loops and a hashmap and store the unique character and increase the count and whenever there is duplicate element presetn
i will break it
        int n=s.size();
        int maxLen=0;
        for (int i=0;i<n;i++){
            unordered_map<char,int>mp;
            int count=0;
            for (int j=i;j<n;j++){
                if (mp.find(s[j])!=mp.end()){
                    break;
                }
                mp[s[j]]++;
                count++;
            }
            maxLen=max(maxLen,count);
        }
        return maxLen;
    */