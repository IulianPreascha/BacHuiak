#include <bits/stdc++.h>
using namespace std;

ifstream fin("BAC.TXT");

int a[50], s[50];

int main()
{
    int x, n, sum, m = 0, newM;
    fin >> x;

    for (int i = 0; i < x; i++)
    {
        fin >> n;
        s[i] = n;
    }

    for (int i = 0; i < x; i++)
    {
        if (pow(sqrt(s[i]), 2) == s[i])
        {
            a[m] = s[i];
            m++;
        }
    }

    newM = m;

    for (int i = 0; i < x; i++)
    {
        while (m != 1)
        {
            cout << a[i] << "+";
            m--;
            i++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (a[i] > 0)
            sum += a[i];
    }

    cout << a[newM - 1] << "=" << sum << endl;

    return 0;
}