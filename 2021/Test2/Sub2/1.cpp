#include <bits/stdc++.h>
using namespace std;

int n,s,c1,c2;

int main() {

    cin>>n;
    s = 1;
    c1 = n %10;
    n = n/10;
    c2 = n % 10;

    if(c1 == c2) s = 0;
    else if(c1<c2) s = -1;

    while((c1-c2)*s>0 && n > 9) {
        c1 = n % 10; 
        n = n/10;
        c2 = n%10;
    } 
    cout<<s<<" "<<n;

    return 0;
}