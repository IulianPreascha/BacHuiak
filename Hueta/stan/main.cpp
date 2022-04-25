#include <bits/stdc++.h>
using namespace std;

void afisareSolutii(int c) {
    for(int i = 0; i<c; i++) {
        for(int j = 0; j<c; j++) {
            for(int m = 0; m<=c; m++) {
                if((i + j + m) == c && (i <= j && j<=m)) cout<<i<<" "<<j<<" "<<m<<endl;
            }
        }
    }
}

int main() {

    afisareSolutii(5);
    
    return 0;
}