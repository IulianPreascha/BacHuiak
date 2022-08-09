#include <bits/stdc++.h>
using namespace std;

char s[101], *p;
int nr, k, ok = 1;

int main() {

    cin.getline(s,101);

    p = strtok(s, " ");

    while(p) {
        if(p[0] >= '0' && p[0] <= '9') {
            if(k == 0) {
                k = strlen(p);
            }
            else {
                if(k != strlen(p)) {
                    ok = 0;
                }
            }
        }
        p = strtok(NULL, " ");
    }

    if(ok == 1) cout<< k;
    else cout<<"NU";

    return 0;
}