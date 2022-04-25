#include <bits/stdc++.h>
using namespace std;

void f(int x) {
    while(x>1) {
        x = x - 1;
        f(x-1);
    }
    cout<<x;
}

int main() {
    f(4);

    return 0;
}