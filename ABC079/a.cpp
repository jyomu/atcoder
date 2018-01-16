#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >>s;
    if (s[1]==s[2])
    {
        if (s[0]==s[1]||s[2]==s[3])
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }
    return 0;
}