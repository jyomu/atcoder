#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h,w;
    cin >> h >> w;
    string s[h];
    for (size_t i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    for (size_t y = 0; y < h; y++)
    {
        for (size_t x = 0;x < w;x++)
        {
            if (s[y][x]=='#')
            {
                cout << '#';
            }else
            {
                char cnt = '0';
                for (size_t i = (y==0?0:y-1); i <= (y==h-1?h-1:y+1); i++)
                {
                    for (size_t j = (x==0?0:x-1); j <= (x==w-1?w-1:x+1); j++)
                    {
                        if(s[i][j]=='#')cnt++;
                    }
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}