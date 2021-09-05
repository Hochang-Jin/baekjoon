#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int result[testcase];

    for (int i = 0; i < testcase; i++)
    {
        int a, b;
        cin >> a >> b;
        result[i] = a + b;
    }

    for (int i = 0; i < testcase; i++)
        cout << "Case #" << i+1 <<": " << result[i] << endl;
}