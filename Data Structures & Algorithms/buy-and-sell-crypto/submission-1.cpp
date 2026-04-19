class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int slow = 0;
        int fast = slow + 1;
        int diff = 0 , profit = 0;
        while(fast < prices.size()){
            diff = prices[fast]-prices[slow];
            profit = max(profit ,diff);
            if(prices[slow] > prices[fast]){
                slow ++;
            }else{
            fast++;
            }
        }
        return profit;
    }
};
