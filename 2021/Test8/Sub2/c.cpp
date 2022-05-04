#include <bits/stdc++.h>
using namespace std;

int n,x,i;

int main() {

    cin>>n;
    x = 0;
    for(int i = 1; i<=n; i++) {
        if(i%2==0) x = x + i*i;
        else x = x + (i+1)*(i+1);
    }
    cout<<x;


    return 0;
}