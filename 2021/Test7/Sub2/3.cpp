#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[21], t[21];
    int i = 0, j = 0;

    strcpy(s,"ABCDUECDA");
    i=0; j=strlen(s)-1;
    while (i<j)
    if(s[i]==s[j]) {
        strcpy(t,s+j+1);
        strcpy(s+j,t);
        strcpy(t,s+i+1);
        strcpy(s+i,t); 
        j=j-2;
    } else { 
        i=i+1; j=j-1; 
    }
    cout<<s;

    return 0;
}