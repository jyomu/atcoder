#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    function<int(int,int)> OpFunc[] = {
        [](int a,int b)->int {return a+b;},
        [](int a,int b)->int {return a-b;}
    };
    for (size_t op1 = 0; op1 < 2; op1++)
    {
        for (size_t op2 = 0; op2 < 2; op2++)
        {
            for (size_t op3 = 0; op3 < 2; op3++)
            {
                if (OpFunc[op3](OpFunc[op2](OpFunc[op1](s[0]-'0',s[1]-'0'),s[2]-'0'),s[3]-'0')==7)
                {
                    cout << s[0] << (op1?'-':'+') << s[1] << (op2?'-':'+') << s[2] << (op3?'-':'+') << s[3] << "=7" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
