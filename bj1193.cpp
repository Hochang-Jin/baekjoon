#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int i = 1, sum = 0;
    int x = 1, y = 1;
    while(1)
    {
        if(sum + i >= a) {
            sum += i;
            break;
        }
        else sum += i++;
    }

    if(i % 2) 
    {
        x = 1; y = i;
        while(1)
        {
            if(sum == a) break;
            else
            {
                x++; y--; sum--;
            }
        }
        cout << x << "/" << y;
    } 

    else
    {
        x = i; y = 1;
        while(1)
        {
            if( sum == a) break;
            else
            {
                x--; y++; sum--;
            }
        }
        cout << x << "/" << y;
    }
}
