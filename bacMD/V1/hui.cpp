#include <bits/stdc++.h>
using namespace std;

ifstream fin("eti.in");
ofstream fout("et.out");

int x;

int CI(int a, int b, int c)
{
    if ((a >= 4) && (b >= 4) && (c >= 4) && ((a + b + c) >= x))
        return 1;
    else
        return 0;
}

int main()
{
    int n, nr = 0;
    fin >> n >> x;
    int a[n * 3];

    for (int i = 0; i < n * 3; i++)
        fin >> a[i];

    for (int i = 0; i < n * 3; i += 3)
    {
        if (CI(a[i], a[i + 1], a[i + 2]) > 0)
            nr++;
    }

    fout << nr;

    return 0;
}