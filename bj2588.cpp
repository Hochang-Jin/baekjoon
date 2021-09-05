#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int b1, b10, b100;

    b1 = b%10;
    b10 = (b%100-b1)/10;
    b100 = b/100;

    cout << b1*a << endl << b10*a << endl << b100*a << endl << a*b;
}