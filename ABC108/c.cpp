#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(size_t a = 1; a < n+1; a++)
    {
        for(size_t b = (int)(k-a)%k; b < n+1; b+=k)//a+b=a+k-a+nk=mk
        {
            if (b==0)
                continue;
            for (size_t c = (int)(k-a)%k; c < n + 1; c+=k)
            {
                if (c == 0)
                    continue;
                //cout  << "(" << a << "," << b << "," << c << ")" << endl;
                if ((b+c)%k==0)
                {
                    cnt++;
                    cout << cnt << ":(" << a << "," << b << "," << c << ")" << endl;
                }
            }
        }
        
    }
    cout << cnt << endl;
    return 0;
}