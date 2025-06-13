class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        if (event2[0]<=event1[1]&& event2[1]>=event1[0])return true;
        return false;

/*
 if (event2[0]<=event1[1])return true;
        return false;
event1 =
["14:13","22:08"]      for this test case we will add condition event1[0]>=event2[0]
event2 =
["02:40","08:08"] 
*/
    }
};