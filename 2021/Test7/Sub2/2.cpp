#include <bits/stdc++.h>
using namespace std;

struct data {
    int zi, luna, an;
} dataEveniment;

struct elev {
    char nume[30];
    data dataNasterii;
} e;

int main() {
    if(e.dataNasterii.an > dataEveniment.an) cout<<"ulterior";
    else if(e.dataNasterii.an == dataEveniment.an && e.dataNasterii.luna > dataEveniment.luna) cout<<"ulterior";
    else if(e.dataNasterii.an == dataEveniment.an && e.dataNasterii.luna == dataEveniment.luna && e.dataNasterii.zi > dataEveniment.zi) cout<<"utlerior";
    else cout<<"nu";

    return 0;
}