#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bitset<32> t;
    for (size_t i = 0; i < n; i++)
    {
        t|=a[i];
    }
    int ans=0;
    while (t[0]==0)
    {
        t>>=1;
        ans++;
    }
    cout << ans <<endl;
    return 0;
}