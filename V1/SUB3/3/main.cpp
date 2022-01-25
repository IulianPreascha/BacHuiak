#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n = 10, x;
    bool alreadyHere = false;
    while (fin >> x)
    {
        if (x % n == 0)
            cout << x << " ";
        alreadyHere = true;
    }
    if (!alreadyHere)
        cout << "NU EXISTA";
}