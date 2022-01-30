#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int a, b, nrap = 1, l, lmax, wrap = 0;
    fin >> a;
    l = lmax = 1;
    while (fin >> b)
    {
        if (a / 100 == b / 100)
        {
            l++;
            if (l > lmax)
            {
                lmax = l;
                wrap = 1;
            }
            else if (l == lmax)
                nrap++;
        }
        else
            l = 1;
        a = b;
    }

    cout << lmax << " " << nrap;

    return 0;
}