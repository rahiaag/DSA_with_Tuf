class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int currProfit=INT_MAX;

        for (int i=0;i<n;i++){
            currProfit=min(currProfit,prices[i]);
            maxProfit=max(maxProfit,prices[i]-currProfit);
        }
        return maxProfit;
    }
};

/* int n=prices.size();
        int maxProfit=0;
        
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                maxProfit=max(maxProfit,prices[j]-prices[i]);
            }
        }
        return maxProfit;*/

/*  int n=prices.size();
        int currPrice=INT_MAX;
        int maxPrice=INT_MIN;

        for (int i=0;i<n;i++){
            currPrice=min(currPrice,prices[i]);
            maxPrice=max(maxPrice,prices[i]-currPrice);
        }
        return maxPrice;*/