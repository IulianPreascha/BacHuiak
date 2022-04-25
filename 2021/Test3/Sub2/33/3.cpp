#include <bits/stdc++.h>
using namespace std;

char s[21];

int main() {
    strcpy(s, "muzeu");
    s[0] = s[0] + 1;
    cout<<s[1]<<s[0]<<endl;
    strcpy(s, "muzeu" + 2);
    cout<<s;
}