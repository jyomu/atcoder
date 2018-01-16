#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,l;
    cin >> n >> l;
    list<string> dict;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        dict.push_back(s);
    }
    dict.sort();
    for(auto var : dict)cout << var;
    cout << endl;
    return 0;
}
