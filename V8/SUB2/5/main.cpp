#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, m = 1;
    cin >> n >> p;
    int s[20][20];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            s[i][j] = m * m;
            m += 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}