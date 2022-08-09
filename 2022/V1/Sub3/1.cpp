#include <bits/stdc++.h>
using namespace std;

int mozaic(int x, int y, int z) 
{
    int cl1=x, cl2=y;
    while(x!=y)
        if(x>y) x-=y;
        else y-=x;
    int cmmmc=(cl1*cl2)/x;
    cl1=cmmmc, cl2=z;
    while(cmmmc!=z)
        if(cmmmc>z) cmmmc-=z;
        else z-=cmmmc;
    cmmmc=(cl1*cl2)/z;
    return cmmmc;
}

int main() 
{
    cout<<mozaic(30,40,20);

    return 0;
}

//! vectori de frecventa
//! secventa de lungime maxima
//! strtok
//! matrci patratice (parcurgere)
//! euclid cmmdc 
//! divizorii unui numar
//! descompunerea in factori primi
//! shimbarea marimii unui vector 