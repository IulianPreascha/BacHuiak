#include <bits/stdc++.h>
using namespace std;

int f(int a, int b)
{
    if (b < 1)
        return -1;
    else if (a % b == 0)
        return 1 + f(a / b, b);
    else
        return 0;
}

int main()
{
    cout << f(128, 2); //! 7
}