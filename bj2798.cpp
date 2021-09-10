/* 2798번 블랙잭 - 브루트포스 */
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for(short i = 0; i < n; i++)
        cin >> a[i];

    short i = 0, j = 1, k = 2;
    int sum = 0, max = 0;

    for(i; i < n-2; i++)
    {
        for(j = i + 1; j < n-1; j++)
        {
            for(k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if( max < sum && sum <= m) max = sum;
            }
        }
    }

    cout << max;
}