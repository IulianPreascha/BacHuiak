#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac1.txt");

int x, st[10], dr[10], i = 1;

int main() {

    while(fin>>x) {
        if(x%2 == 0) {
            if(st[x] == 0) st[x] = i;
            dr[x] = i;
        }
        i++;
    }

    int lmax = 0;

    for(int i = 0; i<=8; i+=2) {
        if(dr[i]-st[i]+1 > lmax) lmax = dr[i] - st[i] + 1;
    }

    cout<<lmax<<endl;

    for(int i = 0; i<=8; i+=2) {
        if(dr[i]-st[i]+1 == lmax) cout<<i<<" ";
    }

    return 0;
}