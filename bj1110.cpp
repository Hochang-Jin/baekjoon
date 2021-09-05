#include <iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    int a = N, b;

    while(1)
    {
        int Ln, Rn;
        Ln = a/10; Rn = a-(Ln*10);
        b = Ln + Rn;
        int bRn = b - (b/10)*10;
        a = 10*Rn + bRn;
        count++;
        if(a == N) break;
    }
    cout << count;
}