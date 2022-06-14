#include <bits/stdc++.h>
using namespace std;

int baza(long int n) {
    int cmax = 0;
    while(n) {
        if(n%10 > cmax)
            cmax = n%10;
        n = n/10;
    }
    return cmax + 1;
}

int main() {

    cout<<baza(1001);
    
    return 0;
}