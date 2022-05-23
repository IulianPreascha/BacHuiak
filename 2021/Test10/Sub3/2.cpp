#include <bits/stdc++.h>
using namespace std;


int main() {

    int m,n, a[21][21];

    cin>>m>>n;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    for(int i = n; i>=0; i--) {
        for(int j = m; j>0; j--) {
            if(a[0][j] == a[i][j] && m == 3) cout<<a[i][j]<<" ";
        }
    }

    return 0;
}