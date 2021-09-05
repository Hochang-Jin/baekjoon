#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int n = S.length();
    int point[26];
    for (int i = 0; i < 26; i++) point[i] = -1;

    for (int i = 0; i < n; i++)
    {
        if(point[(int)S[i]-97] == -1) point[(int)S[i]-97] = i;
    }

    for (int i = 0; i < 26; i++)
        cout << point[i] << " ";
}