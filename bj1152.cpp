#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    int count=0;

    getline(cin, s);

    int i = 0;
    while(s[i] != 0)
    {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        else{
            count++;
            while(s[i] != 0 && s[i] != ' ') i++;
            
        }
                
    }
    cout << count;
}