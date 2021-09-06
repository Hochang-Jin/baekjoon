#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for ( int i = 0; i < t; i++)
    {
        int h, w, n;
        cin >> h >> w >> n;
        int floor, roomN;

        floor = n % h ? n % h : h;  // n%h가 0이면 층수는 h층, 아니면 n%h층
        roomN = (n-1)/h + 1;

        cout << floor*100 + roomN << "\n";
    }

    
}