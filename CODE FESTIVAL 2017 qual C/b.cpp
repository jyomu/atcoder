#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;scanf("%d",&n);
    int cnt=0;
    for (size_t i = 0; i < n; i++) {
        int t;
        scanf("%d",&t);
        if (t%2==0)cnt++;
    }
    printf("%d",(int)(pow(3,n)-pow(2,cnt)));
    return 0;
}