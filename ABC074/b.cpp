#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k;
    cin >> n >> k;
    int x[n];
    for (size_t i = 0; i < n; i++)cin >> x[i];
    int ans=0;
    for (size_t i = 0; i < n; i++)ans+=(k-x[i]<x[i]?k-x[i]:x[i]);
    cout << ans*2 << endl;
    return 0;
}