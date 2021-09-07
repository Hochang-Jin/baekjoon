/*  3054번  택시기하학. 아마도 택시기하학에서 원은 마름모 모양일거 같고, 따라서 넓이는 2r^2 일듯 함 */

#include <iostream>
#include <math.h>
using namespace std;

#define _USE_MATH_DEFINES

int main()
{
    int r;
    cin >> r;

    cout << fixed;
    cout.precision(6);
    cout << r * r * M_PI << "\n" << 2.0 * r * r;
}