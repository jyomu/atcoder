#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

long long int search(const vector<pair<long long int, long long int>> &sushi, const long long int &C)
{
    auto leftSum = [&sushi, &C](int A, bool reset = false) {
        static vector<long long int> leftSum(sushi.size() + 2);
        static bool cached = false;
        if (!cached || reset)
        {
            for (int i = sushi.size() + 1; i >= 1; i--)
            {
                if (i == sushi.size() + 1)
                {
                    leftSum[i] = 0;
                }
                else
                {
                    leftSum[i] = leftSum[i + 1] + sushi[i - 1].second;
                }
            }
            cached = true;
        }
        if (A <= sushi.size())
        {
            return leftSum[A] - (C - sushi[A - 1].first) * 2;
        }
        else
        {
            return leftSum[A];
        }
    };
    auto rightSum = [&sushi](int B, bool reset = false) {
        static vector<long long int> rightSum(sushi.size() + 2);
        static bool cached = false;
        if (!cached || reset)
        {
            for (size_t i = 0; i < sushi.size() + 1; i++)
            {
                if (i == 0)
                {
                    rightSum[i] = 0;
                }
                else
                {
                    rightSum[i] = rightSum[i - 1] + sushi[i - 1].second;
                }
            }
            cached = true;
        }
        if (B != 0)
        {
            return rightSum[B] - sushi[B - 1].first;
        }
        else
        {
            return rightSum[B];
        }
    };
    leftSum(0, true);
    rightSum(0, true);
    long long int ans = 0;
    vector<long long int> maxAtoO(sushi.size() + 1);
    for (int B = sushi.size(); B >= 0; B--)
    {
        if(B == sushi.size()){
            maxAtoO[B] = leftSum(B+1);
        }
        else
        {
            maxAtoO[B] = max(leftSum(B + 1), maxAtoO[B + 1]);
        }
        long long int sum = 0;
            sum += maxAtoO[B];
            sum += rightSum(B);
            if (ans < sum)
            {
                ans = sum;
            }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int N;
    long long int C;
    scanf("%d %lld\n", &N, &C);
    vector<pair<long long int, long long int>> sushi(N), sushiReversed(N);
    for (size_t i = 0; i < N; i++)
    {
        scanf("%lld %lld\n", &(sushi[i].first), &(sushi[i].second));
        sushiReversed[N - i - 1].first = C - sushi[i].first;
        sushiReversed[N - i - 1].second = sushi[i].second;
    }
    long long int leftStart, rightStart;
    leftStart = search(sushi, C);
    rightStart = search(sushiReversed, C);
    cout << max(leftStart, rightStart) << endl;
    return 0;
}
