#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    int m[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &(m[i]));
    }
    int remain = x;
    for (size_t i = 0; i < n; i++)
    {
        remain -= m[i];
    }
    sort(m, m + n);
    printf("%d\n", n + remain / m[0]);
    return 0;
}