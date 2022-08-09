//? Se citesc max 100mii de nr naturale de maxim doua cifre si sa se afiseze numerele cu numar maxim de aparitii.

#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int fr[100], x, maxi;

int main() {

    while(fin>>x) {
        fr[x]++;
    }

    for(int i = 0; i <= 99; i++) {
        if(maxi < fr[i]) maxi = fr[i]; 
    }

    for(int i = 0; i<=99; i++) {
        if(fr[i] == maxi) cout<< i <<" ";
    }


    return 0;
}