#include <bits/stdc++.h>
using namespace std;

int n, s[21][21];

int main() {

    n = 6;

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<=n; j++) {
            if(i+j == n - 1) s[i][j] = 0;
            if(i + j < n - 1) s[i][j] = n - (i+j) - 1;
            if(i + j > n - 1) s[i][j] = s[i][j-1]+1;
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<s[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}