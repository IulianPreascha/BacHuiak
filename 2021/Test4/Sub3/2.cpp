#include <bits/stdc++.h>
using namespace std;

int m,n, a[101][101], maxi = INT_MIN;

int main() {

    cin>>m>>n;

    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cin>>a[i][j];
        }
    }

    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            if(a[i][j] < 21 && a[i][j] > maxi) maxi = a[i][j];
        }
        if(maxi != INT_MIN) cout<<maxi<<endl;
        else cout<<"nu exista"<<endl;
        maxi = INT_MIN;
    }

    return 0;
}