/* 11653 소인수분해 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if(n%2 == 0)
    {
        while(n % 2 == 0)
        {
            cout << "2\n";
            n = n/2;
        }
    }

    for(int i = 3; i < sqrt(n)+1; i += 2)
    {
        while (n%i == 0)
        {
            cout << i << "\n";
            n = n/i;
        }
    }

    if(n>2) cout << n << "\n";


}