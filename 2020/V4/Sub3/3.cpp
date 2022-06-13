#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.txt");

long int x,y;
int k, ok;

int main() {

    fin>>x;
    k = 1;
    while(fin>>y) {
        if(x == y)
            k++;
        else if(k==2) {
            ok = 1;
            cout<<x<<" ";
            k = 1;
        } 
        else {
            k = 1;
        }
        x = y;
    }
    if(k == 2) {
        ok = 1;
        cout<<x<<" ";
    }

    if(ok == 0) {
        cout<<"nu exista";
    }

    return 0;
}