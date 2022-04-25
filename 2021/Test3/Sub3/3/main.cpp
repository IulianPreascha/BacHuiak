#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");
hm,
int main() {
    int n, fr[10] = {0}, nr = 0, poz[100] = {0}, max[10] = {0}, max1=0;
    while(fin>>n) {
        nr++;
        fr[n/10%10]++;
        if(fr[n/10%10] > 0) poz[n/10%10] = nr;
    }

    for(int i = 0; i<=9; i++) {
        if(fr[i] > max1) max1 = i, max[max1] = i;
    }

    for(int i = 0; i<=9; i++) {
        if(poz[max[i]] > 0) cout<<poz[max[i]]<<" ";
    }

    return 0;

}