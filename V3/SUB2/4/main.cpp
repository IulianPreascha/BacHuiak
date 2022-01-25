#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[100];
    cin >> s;
    n = strlen(s);
    for (int i = 0; i < n; i++)
        if (s[i] == 'e')
            cout << "*";
        else
            cout << "e" << s[i];

    //! OUTPUT eied*eael*
    //! INPUTT ideale

    return 0;
}