#include <bits/stdc++.h>
using namespace std;

struct fractie
{
    int x, y;
} f, f1, f2;

int main()
{
    f.x = f1.x * f2.y + f2.x * f1.y;
    f.y = f1.y * f2.y;
}