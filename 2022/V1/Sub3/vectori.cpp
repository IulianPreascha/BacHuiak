#include <bits/stdc++.h>
using namespace std;
int a[100], n, k;
int main() {
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    //! elm toate ap lui k
    // for(int i=1; i<=n; i++)
    //     if(a[i]==k)
    //     {
    //         for(int j = i; j < n; j++) {
    //             a[j] = a[j+1];
    //         }
    //         n--;
    //         i--;
    //     }
    
    //! elm elementul de pe poz k
    // for(int i = k; i<n; i++) {
    //     a[i]=a[i+1];
    // }
    // n--;

    //! inseram pe poz k

    // for(int i = n + 1; i>k; i--) {
    //     a[i] = a[i-1];
    // }
    // a[k] = 0;
    // n++;

    //! inseram dupa fiecare numar par - 0

    // for(int i = 1; i<=n; i++) {
    //     if(a[i]%2 == 0) {
    //         n++;
    //         for(int j = n; j>i+1; j--) {
    //             a[j] = a[j-1];
    //         }
    //         a[i+1] = 0;
    //         i++;
    //     }
    // }

    //! inseram inaintea fiecarui nr par - 0

     for(int i = 1; i<=n; i++) {
        if(a[i]%2 == 0) {
            n++;
            for(int j = n; j>i; j--) {
                a[j] = a[j-1];
            }
            a[i] = 0;
            i++;
        }
    }

    for(int i = 1; i<=n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}