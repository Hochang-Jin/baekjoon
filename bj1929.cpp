#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
    int m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++)
    {
        if(isPrime(i)) cout << i << "\n";
    }
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
