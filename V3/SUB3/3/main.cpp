#include <bits/stdc++.h>
using namespace std;

ifstream fin("NR.TXT");

int main()
{
    int n, m = 0;
    int a[101];
    while (fin >> n)
    {
        if (n > 99)
        {
            a[m] = n;
            m++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
}