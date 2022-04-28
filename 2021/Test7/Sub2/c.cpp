#include <bits/stdc++.h>
using namespace std;

int x,n,y,c;

int main() {

    cin>>x;
    n = 0;
    while(x != 0) {
        y = x; c = 0;
        while(y > 0) {
            if(y % 10 > c) {
                c = y % 10;
            }
            y = y / 10;
        }
        n = n * 10 + c;
        cin>>x;
    }
    cout<<n;

    return 0;
}