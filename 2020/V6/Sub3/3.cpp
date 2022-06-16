#include <bits/stdc++.h>
using namespace std;

ofstream fout("bac.txt");

int p1,p2,c1,c2,c3,c6,c7,x,y,z,nr;

int main() {

    cin>>p1>>p2;

    for(c1 = 9; c1 >= 1; c1--) 
        for(c2 = 9; c2>=1; c2--) 
            if(c1 * c2 == p1) {
                x = c1*10 + c2;
                for(c3 = 9; c3 >= 0; c3--) {
                    y = c3 * 100 + c3 * 10 + c3;
                    for(c6 = 9; c6 >= 1; c6--)
                        for(c7 = 9; c7 >= 1; c7--)
                            if(c6*c7 == p2) {
                                z = c6 + 10 + c7;
                                nr = x * 100000 + y * 100 + z;
                                fout<< nr << endl;
                            }
                }
            }

    return 0;
}