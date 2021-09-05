#include <iostream>
#include <math.h>
using namespace std;

int d(int n)
{
    int devideN[4];
    int tmp = n;

    for(int i = 0; i<4; i++)
    {
        devideN[3-i] = (tmp % (int)pow(10, i+1)) / pow(10,i);
        tmp = tmp - devideN[3-i] * pow(10,i);
    }

    int result = n;
    for (int i = 0; i < 4; i++)
        result += devideN[i];

    return result;
}

int main()
{
    int array[15000];
    for(int i = 0; i < 10000; i++) array[i] = 1;

    for(int i = 1; i < 10000; i++)
    {
        array[d(i)] = 0;
    }
    array[0] = 0;
    for (int i = 0; i < 10000; i++)
    {
        if(array[i]) cout << i << "\n";
    }
}