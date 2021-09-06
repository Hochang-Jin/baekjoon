#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int i;
    if( b-c >= 0 ) cout << "-1";
    else {
        i = a/(c-b);
        cout << setprecision(10) << i + 1;
        
    }

}