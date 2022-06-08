#include <bits/stdc++.h>
using namespace std;

int sumDiv(int n) {
    int sumD = 0;
    for(int d = 1; d<=n; d++) {
        if(n%d == 0) {
            sumD = sumD + d;
        }
    }
    return sumD;
}

int armonie(int x, int y) {
    if(x+y > sumDiv(x) && x+y < sumDiv(y))
        return 1;
    else return 0;
}

int main() {
    
    cout<<armonie(8,12);

    return 0;
}