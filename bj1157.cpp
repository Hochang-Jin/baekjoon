#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ln = s.length();
    int AlphaCount[26] = {0};

    for (int i = 0; i < ln; i++)
    {
        if((int)s[i] <91) AlphaCount[(int)s[i]-65]++;
        else              AlphaCount[(int)s[i]-97]++;
    }

    int max = 0, maxIndex = 0;
    for (int i = 0; i < 26; i++)
    {
        if (AlphaCount[i] > max)
        {
            max = AlphaCount[i];
            maxIndex = i;
        }
        else if(AlphaCount[i] == max){
            maxIndex = -1;
        }
    }

    if (maxIndex == -1) cout << "?";
    else cout << (char)(maxIndex+65);
}