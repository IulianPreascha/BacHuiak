// #include <bits/stdc++.h>
// using namespace std;


// int main() {

//     int m,n, a[21][21];

//     cin>>m>>n;
//     for(int i = 0; i<n; i++) {
//         for(int j = 0; j<m; j++) {
//             cin>>a[i][j];
//         }
//     }

//     for(int i = n; i>=0; i--) {
//         for(int j = m; j>0; j--) {
//             if(a[0][j] == a[i][j] && m == 3) cout<<a[i][j]<<" ";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k = 0;

    for(int i = 100; i<1000; i++) {
        if(((i%10%2 == 0 && i/10%10%2 != 0 && i/100%10%2 != 0) || (i/10%10%2 == 0 && i%10%2 != 0 && i/100%10%2 != 0) || (i/100%10%2 == 0 && i/10%10%2 && i%10%2 !=0)) && (i%10 < 8 && i%10 > 0) && (i/100%10 < 8 && i/100%10 > 0) && (i/10%10 < 8 && i/10%10 > 0)) {
            cout<<i<<" ";
            k++;
        }
    }
    cout<<endl;
    cout<<k;

    return 0;
}