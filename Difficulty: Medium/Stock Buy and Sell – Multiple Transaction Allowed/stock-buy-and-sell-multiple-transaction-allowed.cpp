
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n=prices.size();
        int maxProfit=0;
        
        for (int i=1;i<n;i++){
            if (prices[i]>prices[i-1]){
                int diff=prices[i]-prices[i-1];
                maxProfit+=diff;
            }
        }
     return maxProfit;
        
    }
};

  /* 
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                maxProfit=max(maxProfit,prices[j]-prices[i]);
            }
        }
        return maxProfit;*/