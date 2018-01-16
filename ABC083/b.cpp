#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,a,b;
    cin >> n>>a>>b;
    vector<int> ans;
    for (size_t i = 1; i <= n; i++)
    {
        string s=to_string(i);
        int tmp=0;
        for (size_t j = 0; j < s.size(); j++)
        {
            tmp+=s[j]-'0';
        }
        if (a<=tmp&&tmp<=b)
        {
            ans.push_back(i);
        }
    }
    int sum=0;
    for (size_t i = 0; i < ans.size(); i++)
    {
        sum+=ans[i];
    }
    cout <<sum <<endl;
    return 0;
}