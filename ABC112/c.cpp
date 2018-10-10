#include <bits/stdc++.h>
using namespace std;

const int X = 101;
const int Y = 101;

int main(void)
{
    int N;
    cin >> N;
    vector<tuple<int, int, int>> pyramid;
    for (size_t i = 0; i < N; i++)
    {
        int x, y, h;
        scanf("%d %d %d", &x, &y, &h);
        pyramid.push_back(make_tuple(x, y, h));
    }

    for (int Cx = 0; Cx < X; Cx++)
    {
        for (int Cy = 0; Cy < Y; Cy++)
        {
            int H = 0;
            for(size_t i = 0; i < pyramid.size(); i++)
            {
                if (get<2>(pyramid[i]) >= 1)
                {
                    H = get<2>(pyramid[i]) + abs(get<0>(pyramid[i]) - Cx) + abs(get<1>(pyramid[i]) - Cy);
                    break;
                }
            }
            for(size_t i = 0; i < pyramid.size(); i++)
            {
                if (get<2>(pyramid[i]) != max(H - abs(get<0>(pyramid[i]) - Cx) - abs(get<1>(pyramid[i]) - Cy), 0))
                {
                    break;
                }
                if (i == pyramid.size()-1){
                    cout << Cx << " " << Cy << " " << H << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}