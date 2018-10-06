#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int edge = sqrt((x1 - x2) ^ 2 + (y1 - y2) ^ 2);
    static const double pi = 3.141592653589793;
    x3 = round(x2 + (x2 - x1) * cos(pi / 2) - (y2 - y1) * sin(pi / 2));
    y3 = round(y2 + (x2 - x1) * sin(pi / 2) + (y2 - y1) * cos(pi / 2));
    x4 = round(x3 + (x3 - x2) * cos(pi / 2) - (y3 - y2) * sin(pi / 2));
    y4 = round(y3 + (x3 - x2) * sin(pi / 2) + (y3 - y2) * cos(pi / 2));
    printf("%d %d %d %d", x3, y3, x4, y4);
    return 0;
}