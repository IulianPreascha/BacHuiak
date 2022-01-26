#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[50], x[50];

    cin >> s;
    strcpy(x, s + 4);
    strcpy(s + 4, "123");
    strcat(s, x);
    cout << x << endl;
    cout << s;

    return 0;
}

// abcdefg
//     x = efg
//     s = abcd123
//     abcd123efg