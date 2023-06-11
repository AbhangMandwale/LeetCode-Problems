class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int low=INT_MAX;
        int profitT;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<low){
                low=prices[i];
            }

            profitT = prices[i]-low;
            if(profit<profitT){
                profit=profitT;
            }
        }
        return profit;
    }
};
