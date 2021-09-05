#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int score[N];
    float newscore[N];
    int max = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        if(score[i] > max) max = score[i];
    }

    for (int i = 0; i < N; i++)
    {
        newscore[i] = (float)score[i]/max*100;
    }

    float sum = 0;
    for (int i = 0; i < N; i++)
        sum += newscore[i];

    cout << sum/N;
}