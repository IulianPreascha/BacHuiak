#include <bits/stdc++.h>
using namespace std;

void sub(int n, int m, int a[100], int b[100])
{
    int i = 1, j = 1, k;
    if (a[1] < b[1])
    {
        cout << a[i] << " ";
        k = 2, i++;
    }
    else
    {
        cout << b[j] << " ";
        k = 1, j++;
    }

    while (i <= n && j <= m)
    {
        if (k == 1)
        {
            while (a[i] < b[j - 1])
                i++;
            cout << a[i] << " ";
            k = 2, i++;
        }
        else
        {
            while (a[i - 1] > b[j])
                j++;
            cout << b[j] << " ";
            k = 1, j++;
        }
    }

    if (k == 1)
    {
        if (k == 1)
        {
            while (a[i] < b[j - 1])
                i++;
            cout << a[i] << " ";
        }
    }
    else
    {
        while (a[i - 1] > b[j])
            j++;
        cout << b[j] << " ";
    }
}

int main()
{
    int n, m, a[100], b[100];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sub(n, m, a, b);
}