#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");
int n, x1,x2, ok;

int main() {

    while(fin>>n) {
        if(n % 2 != 0 && x1 == 0) {
            x1 = n;
            ok++;
        }
        if(n % 2 != 0 && x1 != 0) {
            x2 = x1;
            x1 = n;
            ok++;
        }
    }

    if(ok > 2) {
        cout<<x2<<" "<<x1;
    } else 
        cout<<"nu exista";

    return 0;
}