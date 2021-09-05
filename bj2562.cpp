#include <iostream>
using namespace std;

int main()
{
    int max = 1, count = 0;

    for(int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        if (a > max) 
        {
            max = a;
            count = i+1;
        }
    }

    cout << max << "\n" << count;
}