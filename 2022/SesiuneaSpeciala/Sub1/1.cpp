#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[100], d[100];
    strcpy(s, "info@rocnee.eu");
    s[strlen(s)-3] = '\0';
    strcpy(d, strchr(s, '@')+1);

    cout<<d;

    return 0;
}