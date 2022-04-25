#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

int x,nr,a1,a2;
bool c[100] = {0};

int main() {

    while(fin>>x) {
        if(x>9 && x<100) {
            c[x]=true;
        }
    }

    for(int i = 99; i>9; i--) {
        if(c[i] == 0 && a1 == 0 && (i%10 != i/10%10)) {
            a1 = i;
        } else if(c[i] == 0 && (i%10 != i/10%10)) {
            a2 = i;
            break;
        }
    }

    if(a1 != 0 && a2 != 0) {
        cout<<a1<<" "<<a2;
    } else {
        cout<<"nu exista";
    }

    return 0;
}