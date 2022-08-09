#include <bits/stdc++.h>
using namespace std;

int x,y,u,nr,k,t,s;

int main() {

    cin>>x>>y;
    u = 0;
    nr = 0;
    for(k = x; k<=y; k++) {
        s = 0;
        nr = nr + 1;
        for(t = 1; t<=sqrt(k); t++) {
            s = s + t * t;
        }
        if(s != u) {
            cout<<s<<"*"<<nr<<" ";
            u = s;
            nr = 0;
        }
    }

    return 0;
}