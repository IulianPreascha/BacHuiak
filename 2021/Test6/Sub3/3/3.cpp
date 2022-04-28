#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int main() {

    int n, x, p1 = 0, p2 = 0, p3 = 0, nr = 0, k = 0;

    while(fin>>n) {
        nr++;
        if(n < 0 && p1 == 0) {p1 = nr; continue;}
        if(n < 0 && p1 != 0 && p2 < p1) {p2 = nr; continue;}
        if(n < 0 && p2 != 0) {p3 = nr; continue;}
    }

    cout<<max(p2-1,max(p3-p1-1, nr-p2));

    return 0;
}