#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
    int N;
    cin >> N;
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if(isPrime(tmp)) count++;
    }

    cout << count;
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