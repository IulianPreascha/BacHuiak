#include <bits/stdc++.h>
using namespace std;

void sub(int n, int k)
{
    int nr = 0, m = 0;
    int a[3];

    for (int i = k; i < 10000; i++)
    {
        if (i % k == 0)
        {
            nr++;
            a[m] = i;
            m++;
        }

        if (nr == n)
            break;
    }

    for (int i = m - 1; i >= 0; i--)
        cout << a[i] << " ";
}

int main()
{
    int n = 3, k = 5;
    // cin >> n >> k;
    sub(n, k);

    return 0;
}