#include <bits/stdc++.h>
using namespace std;

int main()
{
    char voc[] = {"aeiou"};
    char v[42];

    char a[21] = {"bacalaureat"};
    int n = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        v[n++] = a[i];
        if (strchr(voc, a[i]))
            v[n++] = a[i] - 32;
    }
    cout << v;
}