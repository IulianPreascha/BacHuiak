#include <bits/stdc++.h>
using namespace std;

int n, k;

int joc(int n) {
    int s = 0;
    for(int i = 2; i<=n; i++) {
        if(n%i == 0) s++;
    }
    return s;
}


int main() {

    cout<<joc(12);

    return 0;
}