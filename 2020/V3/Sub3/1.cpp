#include <bits/stdc++.h>
using namespace std;

int factori(long int n, long int m) {
    int nr = 0, d = 2;
    while(n!=1 && m!=1) {
        while(n%d == 0 && m%d == 0) {
            nr++;
            n = n/d;
            m = m/d;
        }
        while(n%d == 0) {
            n = n/d;
        }
        while(m%d == 0) {
            m = m/d;
        }
    d++;
    }
    return nr;
    
}

int main() {
    
    cout<<factori(750,490);

    return 0;
}