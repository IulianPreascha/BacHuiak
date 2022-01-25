#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, m = 5;
    int a[n][m];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i > j)
                a[i][j] = i;
            else
                a[i][j] = j;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}