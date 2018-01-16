#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N,K;
    cin >> N;
    cin >> K;
    int now = 1;
    for (size_t i = 0; i < N; i++)
    {
        if (now*2<now+K)
        {
            now = now*2;
        }
        else
        {
            now = now+K;
        }
    }
    cout << now << endl;
    return 0;
}