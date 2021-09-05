#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int StringToInt(string a)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += ((int)a[i]-48) * pow(10,2-i);
    }
    return sum;
}

int main()
{
    string a, b;
    cin >> a >> b;
    string newA, newB;

    for(int i = 0 ; i < 3 ; i++)
    {
        newA.push_back(a[2-i]);
        newB.push_back(b[2-i]);
    }

    int sangsuA, sangsuB;

    sangsuA = StringToInt(newA);
    sangsuB = StringToInt(newB);

    if(sangsuA > sangsuB) cout << sangsuA;
    else cout << sangsuB;

}