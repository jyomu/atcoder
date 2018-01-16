#include <bits/stdc++.h>
using namespace std;

int main(void){
    char c[6];
    for (size_t i = 0; i < 6; i++)
    {
        cin >> c[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        if (c[i]!=c[5-i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}