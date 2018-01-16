#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int f[n]={},p[n][11];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            int tmp;
            cin >> tmp;
            f[i]+=(tmp<<(9-j));
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 11; j++)
        {
            cin >> p[i][j];
        }
    }
    list<int> x;
    for (size_t state = 0; state < 1<<10; state++)
    {
        if(bitset<10>(state).count()==0)continue;
        int tmp=0;
        for (size_t i = 0; i < n; i++)
        {
            tmp += p[i][bitset<10>(state&f[i]).count()];
        }
        x.push_back(tmp);
    }
    x.sort(greater<int>());
    cout << x.front() << endl;
    return 0;
}