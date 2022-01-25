#include <bits/stdc++.h>
using namespace std;

ofstream fout("test.txt");

void PrelucrareaCifrelorUnuiNumar(int n)
{
    int a;

    if (n == 0)
    {
        a = 1; //? Prelucrez n
    }
    else
    {
        while (n > 0)
        {
            a += n % 10;
            n /= 10;
        }
    }

    fout << "Prelucrarea cifrelor unui numar => " << a << endl;
}

int OglinditulUnuiNumar(int n)
{
    int ogl;
    while (n)
    {
        ogl = ogl * 10 + n % 10;
        n = n / 10;
    }

    return ogl;
}

void Palindrom(int n)
{
    int ogl = n;
    if (OglinditulUnuiNumar(ogl) == n)
    {
        fout << "Palindrom" << endl;
    }
    else
    {
        fout << "Nu este palindrom" << endl;
    }
}

void CifraDeControl(int n)
{
    if (n % 9 == 0)
    {
        fout << "n divizibil cu 9";
    }
    else
    {
        fout << "restul impartirii lui n la 9 => " << n % 9 << endl;
    }
}

void DivizoriiProprii(int n)
{
    fout << "Divizorii proprii a lui n sunt => ";

    for (int d = 2; d <= n / 2; d++)
    {
        if (n % d == 0)
        {
            fout << d << " ";
        }
    }
}

void DescompunereaInFactoriPrimi(int n)
{
    int d = 2, p;
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            n = n / d;
            p++;
        }
        if (p != 0)
        {
            fout << "factorul = " << d << "\tputerea = " << p << endl;
        }
        d++;
        if (n > 1 && d * d > n)
        {
            d = n;
        }
    }
}

void NumarPrim(int n)
{
    int prim = 0;
    for (int d = 2; d <= n / 2; d++)
    {
        if (n % d == 0)
        {
            prim++;
        }
    }
    if (prim == 0)
    {
        fout << "Numarul este prim";
    }
    else
    {
        fout << "Numarul NU este prim";
    }
}

int CMMDC(int a, int b)
{
    while (a != b)
    {
        if (a >= b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

void CMMMC(int a, int b)
{
    fout << (a * b) / CMMDC(a, b);
}

void SirulLuiFibonaci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        fout << c << endl;
    }
}

int SumaFib(int n)
{
    //! Varianta recursiva

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return SumaFib(n - 1) + SumaFib(n - 2);
}

int main()
{
    // PrelucrareaCifrelorUnuiNumar(2);

    // fout << "Oglinditul unui numar => " << OglinditulUnuiNumar(123) << endl;

    // Palindrom(121);

    // CifraDeControl(12);

    // DivizoriiProprii(15);

    // DescompunereaInFactoriPrimi(15);

    // NumarPrim(21);

    // fout << "CMMDC => " << CMMDC(100,15) << endl;

    // CMMMC(100, 15);

    // SirulLuiFibonaci(10);

    // fout << SumaFib(10) << endl;
}