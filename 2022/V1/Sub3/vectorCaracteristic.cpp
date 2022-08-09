//? intr-un fisier se citesc nr naturale de doua cifre. Sa se afiseze acele nr de doua cifre care nu apar in fisier.

#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int x;
bool cr[100];

int main() {

    while(fin>>x) {
        cr[x] = 1;
    }

    for(int i = 10; i<=99; i++) {
        if(cr[i] == 0) cout<<i<<" ";
    }

    return 0;
}