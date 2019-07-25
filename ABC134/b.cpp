#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int N,D;
    cin >> N >> D;
    cout << ceil((float)N/(2*D+1)) << endl;
    return 0;
}
