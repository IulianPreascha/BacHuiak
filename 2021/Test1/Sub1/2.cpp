#include <bits/stdc++.h>
using namespace std;

int f(int n, int k)
{
    if (n!=0)
        if(n%10==k) return 1+f(n/10,k);
    return 0;
}

int main() {
    cout<<f(4770777,7);
}