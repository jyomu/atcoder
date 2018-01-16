#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    int n;
    set<int> data;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        data.insert(t);
    }
    cout << *(++data.crbegin()) << "\n";
    return 0;
}