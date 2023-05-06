
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define inf 1<<29
ll arr1[100005], arr2[100005], arr3[100005];
int main()
{
    int x;
    while (~scanf ("%d", & x) && x)
    {
        for (int i = 0;i < x; i++)
            scanf ("%lld",& arr1[i]);
        arr3[0] = 0;
        arr2[x - 1] = x - 1;
        for (int i = 1; i < x; i++)
        {
            int j=i;
            while (j > 0 && arr1[i] <= arr1[j - 1]) j = arr3[j - 1];
            arr3[i]=j;
        }
        for (int i = x - 2; i >= 0; i--)
        {
            int j = i;
            while (j < x - 1 && arr1[i] <= arr1[j + 1]) j = arr2[j + 1];
            arr2[i] = j;
        }
        long long maximum = 0;
        for(int i = 0; i < x; i++)
        {
            maximum = max(maximum, (arr2[i] - arr3[i] + 1) * arr1[i]);
        }
        printf("%lld\n", maximum);
    }
    return 0;
}