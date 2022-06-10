#include <bits/stdc++.h>
using namespace std;

ofstream fout("bac.txt");

long int x, y, crt;

int main() {

    cin>>x>>y;
    fout<<y<<" "<<x<<" ";
    crt = 3*x-y;
    while(crt<=x) {
        fout<<crt<<" ";
        y = x;
        x = crt;
        crt = 3*x-y;
    }

    return 0;
}