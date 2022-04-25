#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");


int main() {

int k = 0,x, sir1 = 0, sir2 = 0, ok = 0;


    while(fin>>x) {
        if(ok == 1) sir1++;
        if(ok == 0 && x > 0) ok = 1;
        k++;
        if(x>0) sir2 = k;
    }

    if(sir1>sir2) cout<<sir1 + 1;
    else cout<<sir2;

    return 0;
}