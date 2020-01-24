class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max_profit=INT_MIN;
    int buy_price=INT_MAX;
    for(int i=0;i<prices.size();++i){
        buy_price=min(buy_price,prices[i]);
        max_profit=max(prices[i]-buy_price, max_profit);
    }
        return max_profit<0?0:max_profit;
}
};