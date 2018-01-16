#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s,t;
    cin >> s;
    cin >> t;
    sort(s.begin(),s.end(),less<char>());
    sort(t.begin(),t.end(),greater<char>());
    cout << (s<t?"Yes":"No");
    return 0;
}