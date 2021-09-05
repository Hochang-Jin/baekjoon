#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int time = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if((int)s[i] < 80)  
            time += ((int)s[i]-65)/3 + 3;
        else if ((int)s[i] < 84)
            time += 8;
        else if ((int)s[i] < 87)
            time += 9;
        else
            time += 10;
    }

    cout << time;
}