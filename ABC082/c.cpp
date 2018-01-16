#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    map<int,int> cnt;
    for (size_t i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        cnt[t]++;
    }
    int ans=0;
    for (auto i = cnt.cbegin(); i != cnt.cend(); i++)
    {
        if (i->first==i->second)continue;
        if (i->first>i->second)
        {
            ans+=i->second;
        }
        else
        {
            ans+=i->second-i->first;
        }
    }
    cout << ans <<endl;
    return 0;
}