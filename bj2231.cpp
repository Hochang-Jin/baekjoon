/* 2231번 분해합 - 브루트포스, 함수로 만들어풀듯*/
#include <iostream>
using namespace std;

int func(int);

int main()
{
    int n;
    cin >> n;
    int solve = 0;

    for (int i = 0; i < n; i++)
    {
        if(func(i) == n)
        {
            solve = i;
            break;
        }
    }
    cout << solve;
}

int func(int n)
{
    int a[7], tmp = n;
    
    for( short i = 6; i >= 0; i--)
    {
        a[i] = tmp % 10;
        tmp = tmp - a[i];
        tmp = tmp / 10;
    }

    int sum = n;
    for ( short i = 0; i < 7; i++)
        sum += a[i];

    return sum;

}