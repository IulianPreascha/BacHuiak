#include <bits/stdc++.h>
using namespace std;

void f(long int n)
{
    if (n != 0)
    {
        if (n % 2 == 0)
            cout << n % 10;
        f(n / 10);
    }
}

int main()
{
    f(12345); //! 42

    return 0;
}