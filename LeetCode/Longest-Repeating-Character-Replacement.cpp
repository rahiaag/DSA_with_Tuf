
        // https://leetcode.com/problems/longest-repeating-character-replacement/solutions/5481539/simplest-solution-without-map-intuition-approach-o-n-time-o-1-space

        class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0, n = s.size();
        for(char c = 'A'; c <= 'Z'; c++)
        {
            int i = 0, j = 0, replaced = 0;
            while(j < n)
            {
                if(s[j] == c)
                    j++;
                else if(replaced < k)
                    j++, replaced++;
                else if(s[i] == c)
                    i++;
                else
                    i++, replaced--;
                ans = max(ans, j - i);
            }
        }
        return ans;
    }
};
 
/*
first apporahc is that find the maximum letter present in teh array and the find a window with atmost
k non maximum word presnet and give the result ;

Problem : there maybe time or cases where maximum letter will not give the maximum lenght
eg AABCBBAA  K=1 now here if we just change 'C' into B the it will give the highest length



*/