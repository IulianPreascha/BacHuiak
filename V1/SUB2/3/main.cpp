#include <bits/stdc++.h>
using namespace std;

struct punct
{
    float x, y;
} A, B, C;

int main()
{
    cin>>A.x>>A.y>>B.x>>B.y;

    C.x = (A.x + B.x)/2;
    C.y = (A.y + B.y)/2;

    cout << abs(C.x) << '\t' << abs(C.y);
}