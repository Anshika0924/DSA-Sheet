#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // if we are selling on ith day then we bought it for the minmum price it has from o to ith day
    int mini = prices[0];
    int ans = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        ans = max(ans, prices[i] - mini);
        mini = min(mini, prices[i]);
    }
    return ans;
}