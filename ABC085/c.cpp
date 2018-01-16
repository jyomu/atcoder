#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,y;
    scanf("%d %d",&n,&y);
    y/=1000;
    int bill[3];
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= n-i; j++)
        {
            if(10*i+5*j+n-i-j==y){
                printf("%d %d %d",i,j,n-i-j);
                return 0;
            }
        }
    }
    printf("-1 -1 -1");
    return 0;
}