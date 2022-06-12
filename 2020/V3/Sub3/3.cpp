#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

long int x;
int p1, p2, nr, ok;

int main() {

    while(fin>>x) {
        nr++;
        if(x < 0 && ok == 0) {
            p1 = nr;
            ok = 1;
        }
        else if(x<=0 && ok == 1) {
            p2 = nr;
        }
    }

    if(nr - p1 + 1 > p2) 
        cout<<nr - p1 + 1;
    else 
        cout<<p2;


    return 0;
}