#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
    int m, n;
    cin >> m >> n;
    int min = 100000, sum = 0;

    for (int i = m ; i <= n; i++)
    {
        if(isPrime(i))
        {
            if(min > i) min = i;
            sum += i;
        }
    }

    if(sum) cout << sum << "\n" << min;
    else    cout << "-1";
}

bool isPrime(int n)
{
    int tmp = sqrt(n) + 1;

    if ( n == 1) return false;
    for ( int i = 2 ; i < tmp; i++)
    {
        if (!(n % i)) return false;
    }
    
    return true;
}
