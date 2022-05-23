// #include <bits/stdc++.h>
// using namespace std;

// int x,y;

// int main() {

//     cin>>x>>y;
//     if(x<y) {
//         x = x - y;
//         y = x + y;
//         x = y - x;
//     }
//     while(x>=y) {
//         cout<<"A";
//         x = x - y;
//         if(x%2 == 0) {
//             cout<<"A";
//         } else cout<<"B";
//     }


//     return 0;

#include <iostream>
using namespace std;

int n, p = 1;

int main() {
    
    cin>>n;
    
    while(n) {
        if(n%10%2 != 0) p = p * n%10;
        n = n /10;
    }

    cout<<p;

    return 0;
}