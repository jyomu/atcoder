#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    int x[n],l[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &(x[i]));
        l[i] = x[i];
    }
    sort(l, l + n);
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\n", x[i] < l[n / 2] ? l[n / 2] : l[(n / 2) - 1]);
    }
    return 0;
}