class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        int start = 0;
        int end = start + 1;

        while (start < prices.size())
        {
            if (end != prices.size())
            {
                int r = prices[end] - prices[start];
                if (r > 0)
                {
                    if (profit < r)
                    {
                        profit = r;
                    }
                }
                end++;
            }
            else 
            {
                start++;
                end = start + 1;
            }
        }

        return profit;
    }
};
