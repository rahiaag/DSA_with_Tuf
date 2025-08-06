class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        int missing=0;
        int duplicate=0;
        unordered_map<int,int>mp;
        for (auto i:arr){
            mp[i]++;
        }
        for (int i=1;i<=n;i++){
            if (mp[i]==2){
                duplicate=i;
            }
            if (mp[i]==0){
                missing=i;
            }
        }
        return {duplicate,missing};
    }
};

/*
Brute force
1) unordered_map mein 1 to n store karlenge and check akrlenge kiska count 0 and 2 hai 
repeating and missing mil jayega

2) sort karliya uske baad jiska arr[i]==arr[i+1] hoga vo duplicate hoga and set use karke
fir sort karke fir loop run karke check karlenge konsa element present nahi hai

3) math ka use karke but abhi formula nahi pta

4) xor operation

*/