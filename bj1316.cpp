#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        short alpha[26] = {0};

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == s[j+1]) alpha[(int)s[j]-97] = 1;
            else if (alpha[(int)s[j+1]-97] == 1) {
                alpha[(int)s[j+1]-97] = -1;
                break;
            }
            else if (alpha[(int)s[j]-97] == 0) alpha[(int)s[j]-97] = 1;
        }

        bool up = true;

        for ( int j = 0; j < 26; j++)
        {
            if (alpha[j] == -1) up = false;
        }

        if(up) count++;
    }


    cout << count;
}