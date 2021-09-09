/* 2920번 음계 */
#include <iostream>
using namespace std;

int main()
{
    int a;
    bool upside = false;
    for(int i = 0; i < 8; i++)
    {
        if(!i)
        {
            int b;
            cin >> b;
            if (b == 1)
            {
                upside = true;
                a = b;
            }

            else if (b == 8)
            {
                a = b;
            }

            else 
            {
                cout << "mixed";
                break;
            }
        }

        else if (upside)
        {
            int b;
            cin >> b;
            if(a > b)
            {
                cout << "mixed";
                break;
            }
            else
            {
                a = b;
            }
        }

        else
        {
            int b;
            cin >> b;
            if ( a < b)
            {
                cout << "mixed";
                break;
            }
            else
            {
                a = b;
            }
        }
        if( i == 7 && upside) cout << "ascending";
        else if ( i == 7 && !upside) cout << "descending";
    }   
}

    