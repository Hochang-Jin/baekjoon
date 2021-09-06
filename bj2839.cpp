#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 5 == 0) cout << n / 5;
    else
    {
        int min = 5929;
        for ( int i = 0; i <= n / 5; i++)
        {
            if((n - 5*i) % 3 ) continue;
            else if(i + (n- 5*i)/3 < min) min = i + (n - 5*i)/3;
        }

        min != 5929 ? cout << min : cout << "-1" ;
    }
}