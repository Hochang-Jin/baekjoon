#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s[i] == 'c')
        {
            if (s[i+1] == '=' || s[i+1] == '-')
            {
                count++; i++;
            }
            else    count++;
        }

        else if (s[i] == 'd')
        {
            if (s[i+1] == '-')
            {
                count++; i++;
            }
            else if(s[i+1] == 'z' && s[i+2] == '=')
            {
                count++; i += 2;
            }
            else       count++;
        }

        else if (s[i] == 'l' && s[i+1] == 'j')
        {
            count++; i++;
        }

        else if (s[i] == 'n' && s[i+1] == 'j')
        {
            count++; i++;
        }

        else if (s[i] == 's' && s[i+1] == '=')
        {
            count++; i++;
        }

        else if (s[i] == 'z' && s[i+1] == '=')
        {
            count++; i++;
        }

        else count++;
    }

    cout << count;
}