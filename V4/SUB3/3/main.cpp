#include <bits/stdc++.h>
using namespace std;

ifstream fin("NR.TXT");

int main()
{
    int n, s[101], x = 0;
    while (fin >> n)
    {
        if (n <= 99 && n >= -99)
        {
            s[x] = n;
            x++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            if (s[j] < s[i])
                swap(s[i], s[j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout << s[i] << " ";
    }
}