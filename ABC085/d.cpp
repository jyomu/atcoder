#include <bits/stdc++.h>
using namespace std;

struct katana_t
{
    bool operator<( const katana_t& right ) const {
        return b>right.b;
    }
    int a;
    int b;
};

int main(void){
    int n,h;
    cin >> n >> h;
    katana_t k[n];
    int aMax=0;
    unsigned long long int ans=0;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d %d",&(k[i].a),&(k[i].b));
        if (aMax<k[i].a)aMax=k[i].a;
    }
    sort(k,k+n);
    for (size_t i = 0; i < n && aMax < k[i].b; i++)
    {
        h-=k[i].b;
        ans++;
        if(h<=0)break;
    }
    while (h>0)
    {
        h-=aMax;
        ans++;
    }
    cout << ans << endl;
    return 0;
}