/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int min = INT_MAX;
        int ans = 0;
        for(int i = 0; i < prices.size(); i++){
            //cout<<"index : "<<i<<endl;
            if(prices[i] < min){
                min = prices[i];
                //cout<<"minimum element: "<<min<<endl;
            }
            int profit = prices[i] - min;
            //cout<<"profit gained: "<<profit<<endl;
            if(profit >= ans){
                ans = profit;
                //cout<<"answer : "<<ans<<endl;
            }
        }
        return ans;
        
    }
};
// @lc code=end

