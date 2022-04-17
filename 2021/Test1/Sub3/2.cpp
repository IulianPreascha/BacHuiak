#include <bits/stdc++.h>
using namespace std;

int n, a[101][101],i,j;

int main() {

    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++) {
            if(j == 1 && i != n) cout<<a[i][j] << " ";
            if(i == n) cout<<a[i][j] << " ";
        }
    }

    for(int i = n; i>=1; i--){
        for(int j = n; j>=1; j--) {
            if(j == n && i !=n ) cout<<a[i][j] << " ";
            if(i == 1 && j != 1 && j != n) cout<<a[i][j] <<" ";
        }
    }

    return 0;
}