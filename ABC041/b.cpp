#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long int a,b,c;
    cin >> a >> b >> c;
    cout << ((a%1000000007)*b%1000000007)*c%1000000007 << endl;
    return 0;
}