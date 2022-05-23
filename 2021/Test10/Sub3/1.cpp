#include <bits/stdc++.h>
using namespace std;

int sumDiv(int n) {
    int sumdiv = 0;
    for(int d = 1; d<=n; d++) {
        if(n % d == 0) {
            sumdiv = sumdiv + d;
        }
    }
    return sumdiv;
}

int armonie(int x, int y) {
    int sumX = sumDiv(x);
    int sumY = sumDiv(y);

    int sumXY = x + y;

    if(sumXY > sumX && sumXY < sumY) return 1;
    else return 0;

}


int main() {

    cout<<armonie(8,13);

    return 0;
}