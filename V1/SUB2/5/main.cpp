#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        return a;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << min(i, j) << " ";
        }
        cout << endl;
    }
}