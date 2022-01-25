#include <bits/stdc++.h>
using namespace std;

int sub(int v[100], int n, int a)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == a)
            k++;
    }
    return k;
}

int main()
{
    int n, v[100];
    bool distincte = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[i + 1])
            distincte = true;
        else
            distincte = false;
    }
    if (distincte)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}