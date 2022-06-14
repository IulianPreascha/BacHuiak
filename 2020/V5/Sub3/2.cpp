#include <bits/stdc++.h>
using namespace std;

char a[101], *p;
int k;

int main() {
    cin.getline(a,101);
    p = strtok(a," ");
    while(p!=NULL) {
        if(strchr("123456789",p[0])!=NULL)
            if(strchr(p,',')==NULL)
                k++;
        p = strtok(NULL, " ");
    }

    cout<<k;

    return 0;
}