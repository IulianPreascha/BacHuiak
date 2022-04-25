#include <iostream>
using namespace std;



int main() {
int n,x,c,cn,m,p;
    n = 864;
    x = 0, m = 0, p = 1;
    while(x<10) {
        cn = n;
        while(cn!=0) {
            c=cn%10;
            cn = cn/10;
            if(c==x) {
                m = c * p + m; 
                p = p * 10;
            }
        }
        x = x + 2;
    }
    cout<<m;

    return 0;

}