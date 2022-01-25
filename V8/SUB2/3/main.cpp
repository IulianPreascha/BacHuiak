#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin >> s; //! abcdefgh 

    strcpy(s + 2, s + 4);
    cout << s << " " << strlen(s); //! abefgh 6
}