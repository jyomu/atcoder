#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    bool a[n+1]={};
    for (size_t i = 0; i < m; i++)
    {
        int t;
        scanf("%d", &t);
        a[t] = true;
    }
    int l = 0, r = 0;
    for (size_t i = 1; i < x; i++)
    {
        if(a[i])
        {
            l++;
        }
    }
    for (size_t i = x+1; i < n+1; i++)
    {
        if (a[i])
        {
            r++;
        }
    }
    printf("%d\n", l < r ? l : r);
    return 0;
}