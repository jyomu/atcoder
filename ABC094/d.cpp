#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &(a[i]));
    }
    sort(a, a + n);
    int ans_n = a[n - 1];
    int ans_r;
    double t = a[n-1]-a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (t > abs((double)a[i] - (double)ans_n / 2))
        {
            t = abs((double)a[i] - (double)ans_n / 2);
            ans_r = a[i];
        }
    }
    printf("%d %d", ans_n, ans_r);
    return 0;
}