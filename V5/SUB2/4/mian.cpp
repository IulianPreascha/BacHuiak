#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j = 0;
    char s[100], c;
    i = 0;
    cin >> s;
    j = strlen(s) - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        cout << s[i];
    }

    return 0;
}