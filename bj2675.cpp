#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int R;
        string P, S;
        cin >> R >> S;
        for(int j = 0; j < S.length(); j++)
        {
            for(int k = 0; k < R; k++)
                P.push_back(S[j]);
        }
        cout << P << "\n";
    }

}