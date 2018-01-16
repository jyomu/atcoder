#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    long double p = powl(0.5,m);
    cout << "p:" <<p <<endl;
    int tmp,sum=0;
    int i = 1;
    while ((tmp = i*((n-m)*100+m*1900)*p)>=1)
    {
        p*=p;
        cout << "p:" <<p <<endl;
        i++;
        sum+=tmp;
    }
    cout <<sum;
    /*
    1 1
    1*1900*1/2+2*1900*1/4+3*1900*1/8...
    10 2
    1*((10-2)*100+2*1900)*1/(2^2)
    */
    return 0;
}