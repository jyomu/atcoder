#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long int x,y;
    cin >>x>>y;
    int ans=0;
    while (x<=y)
    {
        ans++;
        x*=2;
    }
    cout << ans << endl;
    return 0;
}