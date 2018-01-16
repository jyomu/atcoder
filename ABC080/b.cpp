#include <bits/stdc++.h>
using namespace std;

int ctoi(char c){
    if('0' <= c && c <= '9') return (c-'0');
    else return -1;
}

int main(void){
    string n;
    cin >> n;
    int f=0;
    for (size_t i = 0; i < n.size(); i++)
    {
        f+=ctoi(n[i]);
    }
    cout << ((stoi(n)%f==0)?"Yes":"No")<<endl;
    return 0;
}