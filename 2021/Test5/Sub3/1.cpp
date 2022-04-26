#include <bits/stdc++.h>
using namespace std;

int identice(int n) {
    int nr = 0;
    int k = 0;
    int z = n%10;
    while(n) {
        nr++;
        if(n%10 == z) k++;
        n = n/10;
    }
    if(nr == k) return 1;
    else return 0;
}

int main() {

    cout<<identice(2222);

    return 0;
}

// Corect