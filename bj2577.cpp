#include <iostream>
using namespace std;

int sq(int x, int y)        // 제곱 구하는 함수
{
    int res = 1;
    for (int i = 0; i < y; i++){
        res *= x;
    }
    
    return res;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int multi = a*b*c;      
    int multiple[9];        //자리수별로 분리할 배열
    int result[10] = {0};   //0~9가 몇개씩 있나 카운트할 배열

    for(int i = 1; i < 10; i++)             // 자리수별로 분리
    {
        multiple[9-i] = (multi % sq(10,i)) / sq(10, i-1);
        multi = multi - multiple[9-i] * sq(10, i-1);
    }

    int i= 0;
    while(!multiple[i]) i++;        // 곱셈 결과 자리수가 9개가 안될 경우 앞의 0을 제거
    for(; i < 9; i++)
    {
        result[multiple[i]]++;
    }


    for(int i = 0; i < 10; i++)
        cout << result[i] << "\n";
}