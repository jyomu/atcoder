#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >>s;
    int a=0,b=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i]=='1')
        {
            a++;
        }else
        {
            b++;
        }
    }
    int ans = max(a,b);
    int half;
    if(s.size()%2){
        half=s.size()/2+1;
    }
    else
    {
        half=s.size()/2;
    }

    cout << (ans<half?half:ans)<<endl;
    return 0;
}