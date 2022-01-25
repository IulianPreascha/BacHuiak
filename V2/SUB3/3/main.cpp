#include <bits/stdc++.h>
using namespace std;

ifstream fin("nr.txt");

int main()
{
    int x, a[100], n;

    while (fin >> x)
    {
        if (x > 0)
        {
            a[n] = x;
            n++;
        }
    }

    if (n == 0)
        cout << "NU EXISTA";
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}