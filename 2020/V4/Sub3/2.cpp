#include <bits/stdc++.h>
using namespace std;

int n,m,a[21][21],i,j,ok,k = 0;

int main() {
    cin>>m>>n;
    for(i = 1; i<=m; i++) {
        for(j = 1; j<=n; j++) {
            cin>>a[i][j];
        }
    }

    for(j = 2; j<=n; j++) {
        ok = 1;
        for(i = 1; i<=m; i++) {
            if(a[i][j]==a[i][1])
                ok = 0;
        }
        if(ok == 1) k++;
    }

    cout<<k;

    return 0;
}