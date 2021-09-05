#include <iostream>
using namespace std;

int main()
{
    int result[42] = {0};

    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        result[a%42]=1;
    }

    int count = 0;
    for (int i = 0; i < 42 ; i++)
        if(result[i]) count++;
    
    cout << count;
}