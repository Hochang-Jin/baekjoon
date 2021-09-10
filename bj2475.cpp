/* 2475번 검증수 */
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(short i = 0; i < 5; i++)
    {
        short a;
        cin >> a;
        sum += a * a;   
    }

    cout << sum % 10;
}