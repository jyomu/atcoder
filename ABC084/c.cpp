#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >>n;
    int c[n-1],s[n-1],f[n-1];
    int ans[n];
    for (size_t i = 0; i < n-1; i++)
    {
        cin >> c[i] >> s[i] >> f[i];
    }
    for (size_t i = 0; i < n-1; i++)
    {
        ans[i]=s[i]+c[i];
        for (size_t j = i+1; j < n-1; j++)
        {
            if (ans[i]<s[j])
            {
                ans[i]=s[j]+c[j];
            }else
            {
                size_t x;
                for (x = 0; ans[i] > s[j]+x*f[j]; x++);
                ans[i]=s[j]+x*f[j]+c[j];
            }
        }
    }
    ans[n-1]=0;
    for (size_t i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}