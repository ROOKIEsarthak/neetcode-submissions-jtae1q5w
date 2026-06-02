class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0 ,profit = 0, maxProfit = 0 , r = 1;
        while(r < prices.size()){
            if(prices[l] < prices[r]){ 
                profit = prices[r] - prices[l]; 
            }else{
                l=r;
            } 
            maxProfit = max(profit,maxProfit);
            r++;
        }
        return maxProfit; 
    }
};
