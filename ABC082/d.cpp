#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int x, y;
    cin >> s >> x >> y;
    vector<int> forwardCount(1, 0);
    for (auto &&i : s)
    {
        if (i == 'F')
        {
            forwardCount.back()++;
        }
        else
        {
            forwardCount.push_back(0);
        }
    }

    vector<set<int>> DP(2,{0});
    for (size_t i = 0; i < forwardCount.size(); i++)
    {
        set<int> nextDP;
        for (auto &&xx : DP[i % 2])
        {
            nextDP.insert(xx + forwardCount[i]);
            if(i!=0)nextDP.insert(xx - forwardCount[i]);
        }
        DP[i % 2] = nextDP;
    }
    if (DP[0].count(x) && DP[1].count(y))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
