/* 3009번  네번째 점 */

#include <iostream>
using namespace std;

int main()
{
    int x[3], y[3];
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    
    int sx, sy;

    x[0] == x[1] ? sx = x[2] : (x[0] == x[2] ? sx = x[1] : sx = x[0]);
    y[0] == y[1] ? sy = y[2] : (y[0] == y[2] ? sy = y[1] : sy = y[0]);

    cout << sx << " " << sy;
}