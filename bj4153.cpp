/* 4153번 직각삼각형 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    while(1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (!a && !b && !c) break;
        
        int max = 0;

        if(a > max) max = a;
        if(b > max) max = b;
        if(c > max) max = c;

        if(a*a + b*b + c*c == 2 * max * max) cout << "right\n";
        else                                 cout << "wrong\n";

    }
}