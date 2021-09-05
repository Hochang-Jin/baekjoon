#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int scoreset;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int score = 0;
        scoreset = 0;
        for(int j = 0; j < s.length(); j++)
        {
            if(s[j] == 'O'){
                scoreset += ++score;
            }
            else    score = 0;
        }
        cout << scoreset << "\n";
    }
    
}