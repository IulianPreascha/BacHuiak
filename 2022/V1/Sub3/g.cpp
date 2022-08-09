#include <bits/stdc++.h>
using namespace std;

int p,d,a;

int main() {

    cin>>a;
    d = 2;
    while(a > 1) {
        p = 0;
        while(a%d == 0) {
            p = p + 1;
            a = a / d;
        }
        if(p) {
            cout<<d<<'^'<<p<<" ";
        }
        d++;
    }

    return 0;
}