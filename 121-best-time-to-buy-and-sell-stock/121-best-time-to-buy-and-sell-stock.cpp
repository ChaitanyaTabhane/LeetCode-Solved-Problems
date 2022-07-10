class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,n=prices.size(), minPrice = INT_MAX;
        
        for (int i=0;i<n;i++){
            
            //getting minimum value in the array
            minPrice = min(minPrice,prices[i]);
            
            //calculating Profit and updating it with maxProfit if it us greater
            int profit = prices[i]-minPrice;
            maxProfit=max(maxProfit,profit);
            //maxProfit= max(maxProfit,prices[i]-minPrice);
            }
        return maxProfit;
        }
           
};