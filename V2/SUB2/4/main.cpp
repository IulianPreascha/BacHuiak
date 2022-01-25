#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int a[n];
    int s = 0;
    int m = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n / 2; j++)
    {
        if (a[j] % 2 == 0)
            m = m + a[j];
        s = m % 10;
    }

    cout << s;

    return 0;
}