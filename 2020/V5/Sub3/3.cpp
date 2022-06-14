#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int nr,s,smax,ok = 1;

int main() {
    while(fin>>nr) {
        if(s + nr >= nr && ok == 1 && s + nr >= smax)
            s = s + nr;
        else 
        {
            ok = 0;
            if(s > smax)
                smax = s;
        }
        if(ok == 0) {
            s = nr;
            ok = 1;
        }
    }
    if(s > smax) 
        smax = s;
    cout<<smax;

    return 0;
}