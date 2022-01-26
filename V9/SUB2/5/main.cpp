#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n * 2][n * 2];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> s[i][j];
        }
    }

    for (int j = 1; j < n; j++)
        cout << s[1][j] << " ";
    for (int i = 1; i < n; i++)
        cout << s[i][n] << " ";
    for (int j = n; j > 1; j--)
        cout << s[n][j] << " ";
    for (int i = n; i > 1; i--)
        cout << s[i][1] << " ";

    return 0;
}

// 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7