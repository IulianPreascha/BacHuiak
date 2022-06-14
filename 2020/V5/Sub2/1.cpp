#include <bits/stdc++.h>
using namespace std;

char a[6][6];

int main() {

    for(int i = 0; i<6; i++) {
        for(int j = 0; j<6; j++) {
            if(j < 3) a[i][j] = '(';
            else a[i][j] = ')';
            if((i > j && i + j < 5) || (i < j && i + j > 5)) a[i][j] = '*';
        }
    }

    for(int i = 0; i<6; i++) {
        for(int j = 0; j<6; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}