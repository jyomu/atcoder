#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int cnt=0;
    while (n>1)
    {
        n/=2;
        cnt++;
    }
    cout << pow(2,cnt) << endl;
    return 0;
}