#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int C;
    cin >> C;

    for (int i = 0; i < C; i++)
    {
        int N;
        cin >> N;

        float sum = 0;
        float student[N];
        for ( int j = 0; j < N; j++)
        {
            float score;
            cin >> score;
            student[j] = score;
            sum += score;
        }
        float avg = sum / N;
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if(student[j] > avg) count++;
        }
        float ratio = (float)count/N *100;
        cout << fixed;
        cout.precision(3);
        cout << round(ratio * 1000) / 1000 << "%\n";
    }
}