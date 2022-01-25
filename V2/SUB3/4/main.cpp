#include <iostream>
using namespace std;

int f(int n)
{
    int s = 0, d = 2;
    while (n > 1)
        if (n % d == 0)
        {
            s++;
            n = n / d;
        }
        else
            d++;
    return s;
}

int main()
{
    int n, x, y, z;
    n = 113;
    if (n < 10)
        if (f(n) == 1)
            cout << "da";
        else
            cout << "nu";
    else if (n < 100)
        if (f(n) == 1 && f(n % 10 * 10 + n / 10) == 1)
            cout << "da";
        else
            cout << "nu";
    else
    {
        x = n / 100;
        y = n / 10 % 10;
        z = n % 10;
        if (f(n) == 1 && f(x * 100 + z * 10 + y) == 1 && f(y * 100 + x * 10 + z) == 1 &&
            f(y * 100 + z * 10 + x) == 1 && f(z * 100 + x * 10 + y) == 1 && f(z * 100 + y * 10 + x) == 1)
            cout << "DA";
        else
            cout << "NU";
    }
    return 0;
}