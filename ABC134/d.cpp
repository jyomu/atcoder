#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int N,M=0;
    cin >> N;
    vector<int> a(N),b(N);
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (int i = N; i >= 1; i--)
    {
        int sum=0;
        for (size_t j = 2; i*j <= N; j++)
        {
            if (b[i*j-1]==1)
            {
                sum++;
            }
        }
        if (sum%2==1)
        {
            cout << -1 << endl;
            return 0;
        }else
        {
            M+=(b[i-1]=a[i-1]);
        }
        
        
    }
    cout << M << endl;
    for (size_t i = 0; i < N; i++)
    {
        if (b[i])
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;
    
    
    
    return 0;
}