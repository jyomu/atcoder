#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int ans=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')ans++;
    }
    cout << ans << endl;
    return 0;
}