class Solution {
public:
    bool isUgly(int n) {
        if (n<=0)return false;
        for (auto i:{2,3,5}){
            while (n%i==0){
                n/=i;
            }
        }
        return n==1;
    }
};


      /*
       f (n<=0){return false;
        vector<int> ans;
        int i = 2;
        while (n != 1) {
            if (n % i == 0) {
                n /= i; 
                ans.push_back(i);
            } else {
                i++;
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != 2 && ans[i] != 3 && ans[i] != 5) {
                return false;
            }
        }
        return true;*/

