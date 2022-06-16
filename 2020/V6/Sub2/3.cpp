#include <bits/stdc++.h>
using namespace std;

int a[4][5];

int main() {

    for(int i = 0; i<4; i++) {
        for(int j = 0; j<5; j++) {
            if(i == 0) a[i][j] = j + 1;
            if((i == 1 || i == 2 || i == 3) && j == 0) a[i][j] = a[i-1][4] + 1;
            else a[i][j] = a[i][j-1] + 1;
        }
    }

    for(int i = 3; i>=0; i--) {
        for(int j = 0; j<5; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}