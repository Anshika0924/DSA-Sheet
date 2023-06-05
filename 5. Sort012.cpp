#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int low = 0;
    int high = n - 1;
    int i = 0;
    while (i <= high)
    {
        if (arr[i] == 0)
        {
            swap(arr[low], arr[i]);
            i++;
            low++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else
        {
            swap(arr[high], arr[i]);
            high--;
        }
    }
}