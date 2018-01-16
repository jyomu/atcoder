#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    set<int> s;
    int t;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&t);
        s.insert(t);
    }
    printf("%d",s.size());
    return 0;
}