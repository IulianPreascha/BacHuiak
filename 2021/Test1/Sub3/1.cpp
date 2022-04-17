#include <bits/stdc++.h>
using namespace std;

void divX(int n, int x) {
    while(n) {
        cout<< n * x<< " ";
        n--;
    }
}

int main() {

    divX(4,15);

    return 0;
}