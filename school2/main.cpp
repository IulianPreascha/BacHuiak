#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int x, fr[10];

int main()
{
    while (fin >> x)
        while (x > 0)
        {
            fr[x % 10]++;
            x = x / 10;
        }

    for (x = 9; x >= 0; x--)
        while (fr[x] > 0)
        {
            cout << x;
            fr[x]--;
        }

    return 0;
}