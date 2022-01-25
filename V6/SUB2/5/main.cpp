#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[256];

    cin.getline(s, 256);
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] == 0) || (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == ' '))
            s[i] -= 32;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        cout << s[i];
    }
}