#include <bits/stdc++.h>
using namespace std;

int main(void){
    string w;
    cin >> w;
    string f = "aiueo";
    for(auto s:w){
        if(f.find(s)==-1){
            cout << s;
        }
    }
    cout << endl;
    return 0;
}