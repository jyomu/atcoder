#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int cnt[3] = {};
    for (size_t i = 0; i < 3; i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (size_t i = 0; i < 3; i++)
    {
        if (cnt[i]!=1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}