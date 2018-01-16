#include <iostream>

using namespace std;

unsigned long long L(int n)
{
    static unsigned long long l[86] = {};
    if (n==0){
        return 2;
    }
    if (n==1){
        return 1;
    }
    if (l[n]==0){
        l[n] = L(n - 1) + L(n - 2);
    }
    return l[n];
}

int main(){
    int n;
    cin >> n;
    cout << L(n) << endl;
}
