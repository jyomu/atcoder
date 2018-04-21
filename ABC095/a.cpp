#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int cnt = 0;
    for (size_t i = 0; i < 3; i++)
    {
        if(s[i]=='o')
            cnt++;
    }
    cout << 700 + 100 * cnt << endl;
    return 0;
}