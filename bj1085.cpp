#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int a, b, c, d;
    a = w - x; b = x;
    c = h - y; d = y;

    int min = a;
    if(min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;

    cout << min;
}