#include <bits/stdc++.h>
using namespace std;

int cif(int a, int b)
{
    int x = 0;
    while (a)
    {
        if (a % 10 == b)
            x++;
        a = a / 10;
    }
    return x;
}

int main()
{
    int v[10], n = 0, app = 0, x = 21523531;

    for (int i = 0; i < 10; i++)
    {
        v[i] = cif(x, i);
        if (v[i] % 2 != 0)
            app++;
    }

    if (app > 1)
        cout << "0";
    else
    {
        for (int i = 9; i >= 0; i--)
        {
            if (v[i] && v[i] != 1)
            {
                n = n + i;
                n = n * 10;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            if (v[i] && v[i] != 1)
            {
                n = n + i;
                n = n * 10;
            }
        }
        n = n / 10;
        cout << n;
    }
}