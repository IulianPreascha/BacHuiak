#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[15] = {0}, aux[15] = {0};
    int i;

    strcpy(s, "voalata");
    cout<<strlen(s);
    i = 0;
    while(i < strlen(s)) {
        if(strchr("aeiou", s[i]) != NULL) {
            strcpy(aux, s + i + 1);
            strcpy(s+i,aux); i= i+1;
        }
        else i = i + 2;
    }

    cout<<s;

    return 0;
}