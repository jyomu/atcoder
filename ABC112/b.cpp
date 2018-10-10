#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, T;
    cin >> N >> T;
    vector<pair<int, int>> route;
    for(size_t i = 0; i < N; i++)
    {
        int c, t;
        scanf("%d %d", &c, &t);
        if (t<=T)
        {
            route.push_back({c, t});
        }
    }
    sort(route.begin(), route.end(), 
        [](const pair<int, int> &x, const pair<int, int> &y) { return x.first < y.first;}
    );
    if (!route.empty())
    {
        cout << route.front().first << endl;
    }
    else
    {
        cout << "TLE" << endl;
    }
    return 0;
}