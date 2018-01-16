#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x,a,b;
    cin >> x >> a >> b;
    cout << (abs(a-x)<abs(b-x)?'A':'B') << endl;
    return 0;
}