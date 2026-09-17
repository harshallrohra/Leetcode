class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mini = prices[0]
        maxi_profit = 0

        for i in prices:
            if i< mini:
                mini = i

            profit = i - mini

            if profit > maxi_profit:
                maxi_profit = profit
        return maxi_profit