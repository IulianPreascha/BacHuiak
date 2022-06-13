#include <bits/stdc++.h>
using namespace std;

void generatoare(long int n) {
    long int a,b,k = 0;
    for(a = 2; a<=n/2; a++) {
        for(b = 1; b<=n/2; b++) {
            if(a!=b && a*b+a/b==n) {
                k++;
                cout<<a<<"-"<<b<<" ";
            }
        }
    }
    if(k==0) cout<<"nu exista";
}


int main() {

    generatoare(5);

    return 0;
}