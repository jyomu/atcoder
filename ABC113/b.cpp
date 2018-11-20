#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int t, a;
    cin >> t >> a;
    list<tuple<int, double>> degree;
    for(size_t i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        degree.push_back(make_tuple(i+1,abs((t-h*0.006)-a)));
    }
    degree.sort([](tuple<int, double> l, tuple<int, double> r) {
        return get<1>(l) < get<1>(r);
    });
    cout << get<0>(degree.front()) << endl;
    return 0;
}