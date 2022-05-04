#include <bits/stdc++.h>
using namespace std;

int n, a[101][101], s = 0;

int main() {

    cin>>n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            cin>>a[i][j];
        }
    }

    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            if(i < j && i + j > n + 1 && j != n) 
                s = a[i][j] + s;
        }
    }

    cout<<s;


    return 0;
}