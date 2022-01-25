#include <bits/stdc++.h>
using namespace std;

ofstream fout("NR.TXT");

int main()
{
    int n;
    cin >> n;

    while (n)
    {
        fout << n << " ";
        n = n / 10;
    }

    return 0;
}