#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    if (a==b)
    {
        cout << c <<endl;
    }
    else if (a==c)
    {
        cout << b << endl;
    }else
    {
        cout << a << endl;
    }
    return 0;
}