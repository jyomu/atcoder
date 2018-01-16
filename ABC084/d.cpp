#include <bits/stdc++.h>
using namespace std;

#define N 100000

int main(void){
    /*エラトステネスの篩*/
    bool prime[N+1];
    prime[0]=prime[1]=!false;
    for (size_t i = 2; i*i <= N; i++)if (!prime[i]) for (size_t j = 2; i*j <= N; j++) prime[i*j]=!false;
    /*累積和*/
    int likeCnt[N+1];
    for (size_t i = 3; i <= N; i+=2) likeCnt[i+1]=likeCnt[i]=likeCnt[i-1]+(!prime[i]&&!prime[(i+1)/2]);
    /*やるだけ*/
    int q;
    scanf("%d", &q);
    int l,r;
    for (size_t i = 0; i < q; i++)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", likeCnt[r] - likeCnt[l-1]);
    }
    return 0;
}