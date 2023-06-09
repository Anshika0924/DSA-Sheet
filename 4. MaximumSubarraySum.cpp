#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int ans = 0;
    long long int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum > ans)
        {
            ans = currsum;
        }
        if (currsum < 0)
            currsum = 0;
    }
    return ans;
}