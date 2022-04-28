#include <bits/stdc++.h>
using namespace std;

void numar(int n, int c, int &m)
{
    int p = 1;
    m =- 1;
    while(n!=0)
    {
        if(m<0 && n%10!=c)
            m = 0;
        if(n%10!=c && n%10 != 0)
        {
            m += p*(n%10);
            p *= 10;
        }
        n/=10;
    }
}

int main() {

    int m = 0;

    numar(50752, 5, m);

    cout<<m;

    return 0;
}