#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout("BAC.TXT");
    ifstream fin("test.txt");
    int n = 3, i, temp, secund;
    // cin >> n;
    int v[3 * n];
    for (i = 0; i < 3 * n; i++)
    {
        fin >> v[i];
    }

    if (n > 1)
    {
        if (n % 2 == 0)
        {
            secund = 3 * n - 2;
        }
        else
        {
            secund = 3 * n - 1;
        }
        temp = v[1];
        v[1] = v[secund];
        v[secund] = temp;
    }
    for (i = 0; i < 3 * n; i++)
    {
        fout << v[i] << " ";
    }
    return 0;
}