#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    int fixH, fixM;

    fixH = H;
    fixM = M - 45;
    if (fixM < 0)
    {
        fixM = fixM + 60; //
        fixH--;
        if(fixH < 0)
        {
            fixH = 23;
        }
    }
    cout << fixH << " " << fixM;
}