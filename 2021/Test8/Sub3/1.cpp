#include <iostream>
using namespace std;

void nrfp(int n, int& m) {
    int nrfactmax = 0;
    for (int i = 2; i <= n; i++) 
    {
        int nrfact = 0;
        int fact = 2;
        int aux = i;
        while (aux != 1)
        {
            if (aux % fact == 0)
                nrfact++;
            while (aux % fact == 0)
                aux /= fact;
        if (fact == 2)
        fact++;
        else
        fact += 2;
        }

        if (nrfact >= nrfactmax)
        {
            nrfactmax = nrfact;
            m = i;
        }
    }
}

int main() {

int n = 100, m;

// cin >> n;
nrfp(n, m);
cout << m << "\n";

return 0;
}