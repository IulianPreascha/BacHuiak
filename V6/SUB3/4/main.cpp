#include <bits/stdc++.h>
using namespace std;

ifstream fin("BAC.TXT");

int main()
{
    int a, v[10], x, nr, y;

    fin >> y;
    nr = 1;
    while (fin >> x)
    {
        if (x == y)
            nr++;
        else
        {
            cout << y << " " << nr << " ";
            nr = 1;
            y = x;
        }
    }

    cout << y << " " << nr;

    return 0;
}