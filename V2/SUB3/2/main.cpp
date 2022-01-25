#include <bits/stdc++.h>
using namespace std;

void f(long n)
{
    cout << n % 10;
    if (n != 0)
    {
        f(n / 100);
        cout << n % 10;
    }
}

int main()
{
    f(12345); //! 5310135 
}