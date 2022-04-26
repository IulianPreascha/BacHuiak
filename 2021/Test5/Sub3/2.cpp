#include <bits/stdc++.h>
using namespace std;


int main() {

    int m,n, a[101][101];

    cin>>m>>n;
    for(int i = 1; i<=m; i++) {
        for(int j = 1; j<=n; j++) {
            cout<<(i * j) % 10<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Geniy