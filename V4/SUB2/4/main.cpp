#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    int i;
    i = 0;
    cin >> s;
    while (i < strlen(s))
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            strcpy(s + i, s + i + 1);
            i--;
        }
        i++;
    }
    cout << s << endl;
}