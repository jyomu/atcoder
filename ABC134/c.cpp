#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<int> A(N);
    int best = 0, next = 0;
    for (size_t i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        if (next<=t)
        {
            next=t;
            if (best<=t)
            {
                swap(best,next);
            }
            
        }
        
        A[i] = t;
    }
    for (size_t i = 0; i < N; i++)
    {
        if (A[i]!=best)
        {
            cout << best << endl;
        }else
        {
            cout << next << endl;
        }
    }
    
    return 0;
}
