#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    long long int c;
    cin >> n >> c;
    long long int x[n+2]={};
    x[n + 1] = c;
    int v[n+2]={};
    for (size_t i = 1; i < n+1; i++)
    {
        scanf("%lld %d", &x[i], &v[i]);
    }
    long long int right[n+2]={},left[n+2]={};
    for (size_t i = 1; i <= n+1; i++)
    {
        right[i] = right[i - 1] + v[i] - x[i] + x[i - 1];
        left[i] = left[i - 1] + v[n + 1 - i] - x[n - i] + x[n + 1 - i];
    }
    /*for (size_t i = 0; i < n + 1; i++)
    {
        printf("%lld\n", x[i]);
    }*/
    sort(right, right + n + 2);
    sort(left, left + n + 2);
    printf("%lld\n", max(right[n], left[n]));
    return 0;
}