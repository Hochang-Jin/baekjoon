/* 10870번 피보나치 수 5 - 재귀 사용 */
#include <iostream>
using namespace std;

int fibo(int n);

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}

int fibo(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}