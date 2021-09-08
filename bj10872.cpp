/* 10872번 팩토리얼 - 재귀함수 사용 */
#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int n;
    cin >> n;

    cout << fact(n);
}

int fact(int n)
{
    if(n == 0 || n == 1) return 1;
    else{
        return n * fact(n-1);
    }
}
