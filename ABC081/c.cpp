#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k;
    cin >> n >> k;
    int cnt[n]={};
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cnt[a-1]++;
    }
    sort(cnt,cnt+n,greater<int>());
    int sortOfNum=0;
    for (size_t i = 0; i < n; i++)
    {
        if (cnt[i]==0)break;
        sortOfNum++;
    }
    int ans=0;
    for (size_t i = 0; i < (sortOfNum-k<0?0:sortOfNum-k); i++)
    {
        ans+=cnt[sortOfNum-1-i];
    }
    cout << ans <<endl;
    return 0;
}