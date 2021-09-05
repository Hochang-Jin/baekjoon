#include <iostream>
#include <math.h>
using namespace std;

bool func(int n)
{
    if (n < 100) return true;
    else if (n<1000)
    {
        int devideN[3], tmp;
        tmp = n;
        for(int i = 0; i < 3; i++)
        {
            devideN[2-i] = tmp % (int)pow(10, i+1) / pow(10, i);
            tmp = tmp - devideN[2-i] * pow(10, i);
        }
        int d = devideN[1]-devideN[0];
        if(devideN[1] + d == devideN[2]) return true;
        else return false;
    }
    else return false;
}

int main()
{
    int N;
    cin >> N;
    int count = 0;

    for(int i = 1; i < N+1; i++)
    {
        if(func(i)) count++;
    }

    cout << count;
}