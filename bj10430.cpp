#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int result1 = (a+b)%c;
    int result2 = ((a%c) + (b%c))%c;
    int result3 = (a*b)%c;
    int result4 = ((a%c)*(b%c))%c;

    cout << result1 << endl << result2 << endl << result3 << endl << result4;
}