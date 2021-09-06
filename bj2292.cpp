#include <iostream>
using namespace std;

int func(int n)
{
    int i = 0, sum = 1;

    while(1)
    {
        sum += i * 6;
        if(sum >= n) break;
        i++;
    }

    return i + 1;
}

int main()
{
    int n;
    cin >> n;

    cout << func(n);
}