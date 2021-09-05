#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int min = 1000000, max = -1000000;
    int array[N];
    for(int i = 0; i < N; i++)
        cin >> array[i];

    for(int i = 0; i < N; i++)
    {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    cout << min << " " << max;
}