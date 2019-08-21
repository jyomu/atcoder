#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> a(N+1),ans(N+1,0);
    int ans_cnt = 0;
    for (size_t i = 1; i <= N; i++)
    {
        scanf("%d", &a[i]);
    }for (int i = N; i >= 1; i--)
    {
        int sum = 0;
        for (size_t m = 2*i; m <= N; m += i)
        {
            sum += ans[m];
        }
        if(sum%2!=a[i]){
            ans[i] = 1;
            ans_cnt++;
        }
    }
    cout << ans_cnt << endl;
    for (size_t i = 1; i <= N; i++)
    {
        if (ans[i]==1)
        {
            cout << i << " ";
        }
    }
    cout <<endl;
    
    

    return 0;
}
