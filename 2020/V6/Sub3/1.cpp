#include <bits/stdc++.h>
using namespace std;

void prodprim(int n, int &p) {
    int d = 2;
    p = 1;
    int k;
    while(n > 1) {
        k = 0;
        while(n%d == 0) {
            n = n / d;
            k++;
        }
        if(k!=0) p = p * d;

        d++;
    }
}

int main() {

    int p;
    prodprim(2000, p);

    cout<<p;

    return 0;
}