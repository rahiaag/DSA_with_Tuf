class Solution {
public:
    int lengthOfLongestSubstring(string s) {
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
    }
};