#include <bits/stdc++.h>
using namespace std;

int n,m, a[41][41], k;

int main() {
    cin>>m>>n;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            if(a[j][n]==a[i][1]&&a[j][n]!=0){
                k=1;
                cout<<a[j][n]<<' ';
            }

    if(k == 0) {
        cout<<"nu exista";
    }
}

