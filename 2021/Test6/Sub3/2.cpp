#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4, a[21][21] = {0};

    // cin>>n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            if(j == 1) a[i][j] = n - i;
            else a[i][j] = a[i][j-1] - 1; 
            if(i + j == n + 1) a[i][j] = 0;
            if(i + j > n + 1) a[i][j] = a[i][j - 1] + 1;
        }
    }

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}