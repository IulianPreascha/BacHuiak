#include <bits/stdc++.h>
using namespace std;

int n, a[21][21], i, j;

int main() {

    cin>>n;
    for(i = 1; i<=n; i++) {
        for(j = 1; j<=n; j++) {
            if(i + j == n + 1) a[i][j] = n;
            else if(i+j > n + 1) a[i][j] = a[i][j-1] -1;
        }
    }

    for(i = n; i>=1; i--) {
        for(j = n; j>=1; j--) {
           if(i+j < n + 1) a[i][j] = a[i][j+1] - 1;
        }
    }

    for(i = 1; i<=n; i++) {
        for(j = 1; j<=n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}