#include <bits/stdc++.h>
using namespace std;

int factori(int n, int m) {
    int d1 = 2, d2 = 2;
    int p1, p2;
    int k = 0;
    while(n>1 && m>1) {
        p1 = p2 = 0;
        while(n%d1 == 0) {
            p1 = p1 + 1;
            n = n / d1;
        }

        while(m%d2 == 0) {
            p2 = p2 + 1;
            m = m / d2;
        }

        if(d1 == d2 && p1 == p2 && (p1 != 0)) {
            k++;
        }
        d1++;
        d2++;
    }
    return k;
}

int main() {
    
    cout<<factori(16500,10780);

    return 0;
}