#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int, int>> data; //{市番号,県,年,内部順序}
    for(size_t i = 0; i < m; i++)
    {
        int p, y;
        scanf("%d %d", &p, &y);
        data.push_back(make_tuple(i + 1, p, y, -1));
    }
    int cnt[n+1] = {};

    sort(data.begin(), data.end(),
        [](tuple<int, int, int, int> l, tuple<int, int, int, int> r) {
            return get<2>(l) < get<2>(r);
        });
    
    for(size_t i = 0; i < m; i++)
    {
        cnt[get<1>(data[i])]++;
        data[i] = make_tuple(get<0>(data[i]), get<1>(data[i]), get<2>(data[i]), cnt[get<1>(data[i])]);
    }

    sort(data.begin(), data.end(),
         [](tuple<int, int, int, int> l, tuple<int, int, int, int> r) {
             return get<0>(l) < get<0>(r);
         });
    
    
    for(size_t i = 0; i < m; i++)
    {
        cout << setw(6) << setfill('0') << get<1>(data[i]) << setw(6) << setfill('0') << get<3>(data[i]) << endl;
    }
    
    return 0;
}