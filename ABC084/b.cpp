#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b;
    string s;
    cin >> a >> b;
    cin >> s;
    for (size_t i = 0; i < a+b+1; i++)
    {
        if (i==a)
        {
            if (s[i]!='-')
            {
                cout << "No";
                return 0;
            }
        }else
        {
            if (s[i]=='-')
            {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}