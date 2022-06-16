#include <bits/stdc++.h>
using namespace std;

char s[101], voc[] = "aeiou", *p;
int v,c, ok;

int main() {
    
    cin.getline(s,101);
    p = strtok(s," ");

    while(p != NULL) {
        c = 0; v = 0;
        for(int i = 0; i<strlen(p); i++)
            if(strchr(voc, p[i]) != NULL) 
                v++;
            else 
                c++;
        if(v < c) {
            cout<<p<<endl; 
            ok = 1;
        }
        p = strtok(NULL, " ");
    }

    if(ok == 0) cout<<"Nu exista";

    return 0;
}