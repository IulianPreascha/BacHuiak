#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, summ = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        summ = summ + a[j];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << summ << endl;
        summ -= a[i];
    }
}