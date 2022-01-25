#include <bits/stdc++.h>
using namespace std;

int f(int a)
{
    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
            return i;
    }
    return a;
}

int main()
{
    int n, app = 0, m = 0;
    cin >> n;
    int a[n], v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == f(a[i]))
        {
            v[m] = a[i];
            app++;
            m++;
        }
    }

    if (app == 0)
        cout << "NU EXISTA";
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < m; j++)
            {
                if (v[j] < v[i])
                    swap(v[i], v[j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            cout << v[i] << " ";
        }
    }

    //! 1125 2 314 101 37 225 12
}